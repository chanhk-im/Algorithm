#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int n = 0, m = 0;
    int max_num = 0;
    int i = 0, j = 0, k = 0;

    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    sort(a, a+n);

    for (i = 0; i < n - 2; i++)
    {
        for (j = i + 1; j < n - 1; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (a[i] + a[j] + a[k] < m && a[i] + a[j] + a[k] > max_num)
                    max_num = a[i] + a[j] + a[k];
                else if (a[i] + a[j] + a[k] == m)
                {
                    max_num = a[i] + a[j] + a[k];
                    break;
                }
            }
            if (a[i] + a[j] + a[k] == m) break;
        }
        if (a[i] + a[j] + a[k] == m) break;
    }
    printf("%d", max_num);

    return 0;
}