#include <bits/stdc++.h>

int main()
{
    int n, m;
    int two = 2, five = 5;
    int two_cnt = 0, five_cnt = 0;
    scanf("%d %d", &n, &m);

    while (n / 2 >= two)
    {
        two_cnt += n / two;
        two *= 2;
    }
    two_cnt += n / two;

    while (n / 5 >= five)
    {
        five_cnt += n / five;
        five *= 5;
    }
    five_cnt += n / five;

    two = 2, five = 5;

    while ((n - m) / 2 >= two)
    {
        two_cnt -= (n - m) / two;
        two *= 2;
    }
    two_cnt -= (n - m) / two;

    while ((n - m) / 5 >= five)
    {
        five_cnt -= (n - m) / five;
        five *= 5;
    }
    five_cnt -= (n - m) / five;

    two = 2, five = 5;

    while (m / 2 >= two)
    {
        two_cnt -= m / two;
        two *= 2;
    }
    two_cnt -= m / two;

    while (m / 5 >= five)
    {
        five_cnt -= m / five;
        five *= 5;
    }
    five_cnt -= m / five;

    printf("%d", (two_cnt > five_cnt) ? five_cnt : two_cnt);
    return 0;

}