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

    vector<int> B(N-1);

    rep(i, N-1) cin >> B[i];

    vector<int> A(N);
    A.emplace_back(B[0]);

    for(int i = 1; i < N-1; ++i)
    {
        A.emplace_back(min(B[i], B[i-1]));
    }

    A.emplace_back(max(A[N-2], B[N-2]));

    cout << accumulate(A.begin(),A.end(), 0);
    return 0;
}