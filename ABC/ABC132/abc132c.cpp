#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    int sum = 0;

    cin >> N;

    if (N%2==1)
    {
        cout << 0;
        return 0;
    }

    vector<int> V(N);

    rep(i, N) cin >> V[i];

    sort(V.begin(), V.end());

    if (V[(N-1)/2] == V[(N-1)/2+1])
    {
        cout << 0;
        return 0;
    }

    for (int i = V[(N-1)/2]+1; i<=V[(N-1)/2+1]; ++i)
    {
        ++sum;
    }

    cout << sum;

    return 0;
}