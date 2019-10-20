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

    char S[N];

    rep(i, N)
    {
        cin >> S[i];

        if (i != 0 && S[i] == S[i-1])
        {
            ++sum;
        }
    }

    cout << N-sum;

    return 0;
}