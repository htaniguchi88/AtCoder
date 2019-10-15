#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string S;
    string A1, A2;
    int counter1 = 0;
    int counter2 = 0;
    char one='1';
    char zero='0';
    char temp;

    cin >> S;

    temp = one;

    rep(i, S.size())
    {
        A1.push_back(temp);
        if (A1[i] != S[i])
        {
            ++counter1;
        }

        if (temp == one)
        {
            temp = zero;
        }
        else
        {
            temp = one;
        }
    }

    temp = zero;

    rep(i, S.size())
    {
        A2.push_back(temp);
        if (A2[i] != S[i])
        {
            ++counter2;
        }
        if (temp == one)
        {
            temp = zero;
        }
        else
        {
            temp = one;
        }
    }

    cout << min(counter1, counter2);

    return 0;
}