#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<char> V(4);

    rep(i, 4)
    {
        cin >> V[i];
    }

    sort(V.begin(), V.end());

    if (V[0] == V[1] && V[2] == V[3] && V[1] != V[2])
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}