#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, b;
    int cnt = 0;
    char num[100];
    char res[100];

    scanf("%d %d", &n, &b);
    while (n >= b)
    {
        if (n % b >= 10)
            num[cnt] = n % b + 55;
        else
            num[cnt] = n % b + 48;

        n /= b;
        cnt++;
    }
    if (n >= 10)
        num[cnt] = n + 55;
    else
        num[cnt] = n + 48;

    for (int i = 0; i <= cnt; i++)
    {
        res[i] = num[cnt - i];
    }
    res[cnt + 1] = '\0';
    printf("%s\n", res);

    return 0;
}