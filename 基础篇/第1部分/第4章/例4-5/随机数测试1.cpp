// 每一次程序运行结果都相同  伪随机数
#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 0; i < 3; ++i)
    {
        cout << rand() << ' '; // 总是 41 18467 6334
    }
    return 0;
}