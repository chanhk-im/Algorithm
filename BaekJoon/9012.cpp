#include <bits/stdc++.h>
#include <cstring>

using namespace std;

const int MAX = 50;

int main()
{
    int cnt = 0;
    int l = 0, r = 0;

    scanf("%d", &cnt);

    char ps[cnt][MAX] = {0};      

    for (int i = 0; i < cnt; i++)
    {
        scanf("%s", ps[i]);
        
        l = 0;
        r = 0;

        for (long unsigned int j = 0; j < strlen(ps[i]); j++)
        {
            if (ps[i][j] == '(')
                l++;
                
            else if (ps[i][j] == ')' && r < l)
                r++;

            else if (ps[i][j] == ')' && r >= l)
            {
                r++;
                break;
            }
        }

        if (l == r)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}