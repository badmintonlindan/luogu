#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    cin >> l;
    vector<int> a(10000, 1); // 1表示质数
    int n = 0, all = 0;
    for (int i = 2; i < 10001; ++i)
    {
        if (a[i] == 1)
        {
            // 只需要sqrt(i)即可
            // 可以用j*j<=i来避免小数的不精确
            if (i < 101)
            {
                int j = 2;
                while (i * j < 10001)
                    a[i * j] = 0, ++j;
            }
            all += i;
            if (all <= l)
            {
                cout << i << endl;
                ++n;
            }
            else
            {
                cout << n;
                break;
            }
        }
    }
    return 0;
}