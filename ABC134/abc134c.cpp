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

    rep(i, N)
    {
        temp = V[i];
        V.erase(V.begin()+i);
        cout << *max_element(V.begin(), V.end()) << "\n";
        V.insert(V.begin()+i, temp);
    }

    return 0;
}