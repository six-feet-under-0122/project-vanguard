#include<iostream>
using namespace std;
int a[1005][1005] = { 0 };
int main(void)
{
    int n, m;
    cin >> n >> m;
    
    for (int i = 0;i < m;i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j = x1;j <= x2;j++)
        {
            for (int k = y1;k <= y2;k++)
            {
                a[j][k]++;
            }
        }

    }
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= n;j++)
        {
            cout << a[i][j] << ((j == n) ? '\n' : ' ');
        }
    }

    return 0;
}