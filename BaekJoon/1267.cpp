#include <bits/stdc++.h>

using namespace std;

int a[20];

int main()
{
    int n = 0;
    int i = 0;
    int y_sum = 0;
    int m_sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        y_sum += (a[i] / 30 + 1) * 10;
        m_sum += (a[i] / 60 + 1) * 15;
    }

    if (y_sum < m_sum)
        printf("Y %d\n", y_sum);
    else if (y_sum > m_sum)
        printf("M %d\n", m_sum);
    else
        printf("Y M %d\n", m_sum);

    return 0;
    
}