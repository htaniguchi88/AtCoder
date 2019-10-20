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

    if ((A - 2 * B) <= 0)
    {
        cout << 0;
    }
    else
    {
        cout << (A - 2 * B);
    }

    return 0;
}