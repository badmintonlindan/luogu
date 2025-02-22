#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, v;
    cin >> s >> v;
    int t = 10;
    t += ceil(double(s) / v);
    int HH, MM;
    // 直接以前一天0点为基准！
    // 避免分类讨论
    t = (24 + 8) * 60 - t;
    HH = t / 60 % 24;
    MM = t % 60;
    printf("%02d:%02d", HH, MM);
    return 0;
}