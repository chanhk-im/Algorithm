#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p[100000];
    int n;
    int a;
    int f;
    int c;
    int r;
    int max = 0, min = __INT_MAX__;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
        if (p[i] > max)
            max = p[i];
        if (p[i] < min)
            min = p[i];
    }

    a = p[1] - p[0];

    while (1)
    {
        f = 1;

        for (int i = 0; i < n - 1; i++)
        {
            if ((p[i + 1] - p[i]) < a)
            {
                f = 0;
                a = p[i + 1] - p[i];
                break;
            }
            else if ((p[i + 1] - p[i]) % a != 0)
            {
                f = 0;
                a -= 1;
                break;
            }

        }

        if (f) break;
    }

    r = ((max - min) / a + 1) - n;
    printf("%d", r);

    return 0;
}