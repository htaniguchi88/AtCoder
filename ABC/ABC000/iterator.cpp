#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    std::vector<int> vec{ 33, 16, 21, 91, 8 };
    std::vector<int>::iterator itr = vec.begin();

    ++itr;
    ++itr;

    //戻り値をイテレータに代入
    itr = vec.erase(itr);

    //正常に表示可能
    std::cout << *itr << std::endl;

    return 0;
}