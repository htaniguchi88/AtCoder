#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<int> V{0, 9, 1, 4, 5, 8, 2, 10, 7};
    sort(V.begin(), V.end());

    int N;

    cin >> N;

    int pos = -1;
    int left = 0;
    int right = V.size()-1;

    while (pos == -1 && left <= right)
    {
        int middle = (left + right) /2;
        if (V[middle] == N)
        {
            pos = middle;
        }
        else if (V[middle] > N)
        {
            right = middle - 1;
        }
        else
        {
            left = middle + 1;
        }
    }

    cout << pos;

    return 0;
}