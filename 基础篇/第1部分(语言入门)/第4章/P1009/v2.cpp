// 通过3个点
#include <bits/stdc++.h>
using namespace std;
void write(__int128 x)
{
    if (x > 9)
        write(x / 10);
    putchar(x % 10 + '0');
}
int main()
{
    __int128_t ans = 0, a = 1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        a *= i;
        ans += a;
    }
    write(ans);
    return 0;
}