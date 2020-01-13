#include <bits/stdc++.h>
#include <cstring>

const int MAX = 100000;

int main()
{
    char l[MAX];
    int p[MAX];
    int check[MAX];
    int cc = 0, c = 0, pc = 0;
    int start_idx = 0, end_idx = 0;
    int piece = 0;

    scanf("%s", l);

    for (int i = 0; i < strlen(l); i++)
    {
        if (l[i] == '(' && l[i + 1] != ')')
            check[i] = 1;  
    }

    for (int i = 0; i < strlen(l); i++, pc++) 
    {
        if (l[i] == '(')
        {
            if (l[i + 1] == ')')
            {
                p[pc] = 0;
                i++;
            }
            else
            {
                c++;
                cc = c;
                p[pc] = cc;
            }
        }
        else
        {
            p[pc] = cc;
            check[cc - 1] = 0;
            cc--;

            while (1)
            {
                if (check[cc - 1] == 0)
                    cc--;
                else break;
            }
        }
    }

    for (int i = 0; i < c; i++)
    {
        int f = 1;
        piece++;

        for (int j = 0; j < pc; j++)
        {
            if (p[j] == i + 1)
            {
                if (f)
                {
                    start_idx = j;
                    f = 0;
                }
                else
                    end_idx = j;
                
            }
        }

        for (int j = start_idx + 1; j < end_idx; j++)
        {
            if (p[j] == 0)
                piece++;
        }
    }

    printf("%d", piece);

    return 0;
}