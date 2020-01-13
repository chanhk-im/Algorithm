#include <bits/stdc++.h>

int main()
{
    char arr[100001];
    int c = 0;
    int d = 0;

    scanf("%s", arr);

    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == '(')
        {
            if (arr[i + 1] == ')')
            {
                c += d;
                i++;
            }
            else
            {
                d++;
                c++;
            }
        }
        else
        {
            d--;
        }
        i++;
    }
    printf("%d", c);
}