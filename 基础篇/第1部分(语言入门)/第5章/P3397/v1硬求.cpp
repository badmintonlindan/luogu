#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    vector<vector<int>> a(n + 1, vector<int>(n + 1));
    for (int i = 0; i < m; ++i)
    {
        int x1, y1, x2, y2;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        for (int i1 = x1; i1 <= x2; ++i1)
            for (int j1 = y1; j1 <= y2; ++j1)
                ++a[i1][j1];
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