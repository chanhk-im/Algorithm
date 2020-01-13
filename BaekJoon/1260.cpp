#include <bits/stdc++.h>

using namespace std;

const int MAX = 10000;

int l[MAX][3] = {0};

int main()
{
    int n = 0, m = 0, v = 0;
    int cnt = 0;

    scanf("%d %d %d", &n, &m, &v);

    for (int i = 0; i < m; i++)
        scanf("%d %d", &l[i][0], &l[i][1]);

    int num[n] = {0};

    int pas = 0;
    int cur = v;
    int idx = 0;

    while (cnt < n)
    {
        int m_num = 1001;
        int is_first = 1;
        printf("cur: %d\n", cur);

        for (int i = 0; i < m; i++)
        {
            if (l[i][2] == 0)
            {
                if (l[i][0] == cur)
                {
                    if (l[i][1] < m_num)
                        m_num = l[i][1];
                }
                else if (l[i][1] == cur)
                {
                    if (l[i][0] < m_num)
                        m_num = l[i][0];
                }
            }
        }

        for (int i = 0; i < cnt; i++)
        {
            if (cur == num[i] || m_num == num[i])
            {
                is_first = 0;
                break;
            }
        }

        if (m_num < 1001 && is_first)
        {
            for (int i = 0; i < m; i++)
            {
                if (l[i][0] == cur)
                {
                    if (l[i][1] == m_num)
                    {
                        printf("%d ", cur);
                        num[cnt] = cur;
                        cur = l[i][1];
                        l[i][2] = 1;

                        cnt++;
                        break;
                    }
                }
                else if (l[i][1] == cur)
                {
                    if (l[i][0] == m_num)
                    {
                        printf("%d ", cur);
                        num[cnt] = cur;
                        cur = l[i][0];
                        l[i][2] = 1;

                        cnt++;
                        break;
                    }
                }
            }
        }
        else
        {
            for (int i = 0; i < cnt; i++)
            {
                if (num[i] == cur && i > 0)
                {
                    printf("%d ", cur);
                    num[cnt] = cur;
                    cur = num[i - 1];

                    cnt++;
                    break;
                }
            }
        }
    }

    return 0;
}