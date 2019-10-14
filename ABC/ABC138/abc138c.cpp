#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    vector<int> V;

    cin >> N;

    rep(i, N) cin >> V[i];

    sort(V.begin(), V.end());

    int sum = V[0];

    for(int i=2; i<=V.size(); ++i)
    {
        sum = (sum + V[i]) / 2;
    }

    cout << sum;

    return 0;
}