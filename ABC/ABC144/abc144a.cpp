#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int A, B;

    cin >> A >> B;

    if (A < 1 || B < 1 || A > 9 || B > 9)
    {
        cout << -1;
    }
    else
    {
        cout << A * B;
    }
    return 0;
}