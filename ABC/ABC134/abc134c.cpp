#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    int temp;

    cin >> N;

    vector<int> V(N);

    rep(i, N) cin >> V[i];

    vector<int> V_CP(N);

    V_CP = V;

    sort(V.begin(), V.end());

    int V_MAX = V[N-1];
    int V_SECOND = V[N-2];

    rep(i, N)
    {
        if(V_CP[i] != V_MAX)
        {
            cout << V_MAX << "\n";
        }
        else
        {
            cout << V_SECOND << "\n";
        }
    }

    return 0;
}