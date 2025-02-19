#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, v;
    cin >> s >> v;
    int t = 10;
    t += ceil(double(s) / v);
    int HH, MM;
    if (t <= 480)
    {
        t = 480 - t;
        HH = t / 60;
        MM = t - HH * 60;
    }
    else
    {
        t -= 480;
        t = 24 * 60 - t;
        HH = t / 60;
        MM = t - HH * 60;
    }
    printf("%02d:%02d", HH, MM);
    return 0;
}