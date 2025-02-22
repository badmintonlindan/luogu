#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    vector<vector<int>>
        a(n + 1, vector<int>(n + 1)),
        b(n + 2, vector<int>(n + 2));
    // 对a的差分数组进行操作  把a看作前缀和
    // 前缀和a[i][j]=a[i-1][j]+a[i][j-1]-a[i-1][j-1]+b[i][j]
    // ——> 差分b[i][j]=a[i][j]-a[i-1][j]-a[i][j-1]+a[i-1][j-1]
    for (int i = 0; i < m; ++i)
    {
        int x1, y1, x2, y2;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        ++b[x1][y1];
        --b[x2 + 1][y1];
        --b[x1][y2 + 1];
        ++b[x2 + 1][y2 + 1];
    }
    // 再由b求出a
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            a[i][j] = a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1] + b[i][j];
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}