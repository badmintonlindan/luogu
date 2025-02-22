// 通过两个点
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0, a = 1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        a *= i;
        ans += a;
    }
    cout << ans;
    return 0;
}