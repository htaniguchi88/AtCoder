#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    int ans = 0;

    cin >> N;

    vector<int> V(N);
    vector<int> S(N);

    rep(i, N) cin >> V[i];

    rep(i, N)
    {
        int sum = 0;
        for(int j=0; j<V.size(); ++j)
        {
            if (i != j)
            {
                sum += V[i] * V[j];
            }
        }
        S.emplace_back(sum);
    }

    ans = accumulate(S.begin(), S.end(), 0);

    cout << ans/2;

    return 0;
}