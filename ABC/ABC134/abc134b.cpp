#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, D;
    int unit;

    cin >> N >> D;

    unit = 2 * D + 1;

    rep(i, N)
    {
        if (unit >= N)
        {
            cout << i+1;
            break;
        }
        unit += 2 * D + 1;
    }

    return 0;
}