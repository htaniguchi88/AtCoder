#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;

    cin >> N;

    for(int i=1; i<=9; ++i)
    {
       for(int j=1; j<=9; ++j)
       {
            if (i * j == N)
            {
                cout << "Yes";
                return 0;
            }
       }
    }

    cout << "No";

    return 0;
}