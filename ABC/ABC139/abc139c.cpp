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

    int sum=0, max=0;
    int array[N];

    rep(i, N)
    {
        cin >> array[i];
        if (i>0 && array[i]<=array[i-1]) ++sum;
        else sum = 0;
        if(sum >= max) max = sum;
    }

    cout << max;

    return 0;
}