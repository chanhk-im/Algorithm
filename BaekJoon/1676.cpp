#include <bits/stdc++.h>

int main()
{
    int num = 0;
    int cnt_two = 0;
    int cnt_five = 0;
    int tmp = 0;

    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        tmp = i;
        while (tmp % 2 == 0)
        {
            tmp /= 2;
            cnt_two++;
        }
        tmp = i;
        while (tmp % 5 == 0)
        {
            tmp /= 5;
            cnt_five++;
        }
    }

    printf("%d", (cnt_five > cnt_two) ? cnt_two : cnt_five);
    return 0;
}