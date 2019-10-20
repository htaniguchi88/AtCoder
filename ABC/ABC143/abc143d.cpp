#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;

//! WIP
//!　三角形を構成する棒のうち，1 番目と 2 番目に長いものを固定
//! (同じ長さを持つ棒が複数存在する場合は，予め適当に大小関係を定めておく)
//! このとき，3 番目に長い棒として使える棒は，「2 番目の棒より短く，一定以上の長さを持つもの」
//!  このような棒の数は，予め棒の長さをソートしておくと，二分探索で効率的に求められる
//! 1 番目に長い棒と 2 番目に長い棒の選び方について探索すると，時間計算量 O(N2 log N)

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    ll L[4000];

    cin >> N;
    for(int i = 1; i <= N; i++) cin >> L[i];

    vector<ll> v(N);

    // vに各棒の長さを代入
    for(int i = 0; i < N; i++) v[i] = L[i+1];
    // vを昇順に並べ替え
    sort(v.begin(), v.end());
    ll ans = 0;
    // 要素番号midを小さくしていく
    for(ll mid = N - 1; mid >= 0; mid--) {
        // midより1小さい要素番号lowを小さくしていく
        for(ll low = mid - 1; low >= 0; low--) {
            // 1番目と2番目の和以上の要素を二分探索で求める
            auto itr = lower_bound(v.begin(), v.end(), v[mid] + v[low]);
            // 一番大きい棒の長さとの差
            ll ng = distance(itr, v.end());
            ans += (N - 1 - mid) - ng;
            //cerr << v[mid] + v[low] << " " << ng << " " << (N-1-mid)-ng << endl;
        }
    }
    cout << ans << endl;

    return 0;
}