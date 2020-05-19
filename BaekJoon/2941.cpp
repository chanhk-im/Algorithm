#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    char c[110];
    cin >> c;

    int i = 0;
    int cnt = 0;
    while (i < strlen(c))
    {
        if (c[i] == 'c')
        {  
            cnt += 1;
            i++;
            if (c[i] == '=' || c[i] == '-')
                i++;
        }
        else if (c[i] == 'd')
        {
            cnt += 1;
            i++;
            if (c[i] == 'z' && c[i + 1] == '=')
                i += 2;
            else if (c[i] == '-')
                i++;
        }
        else if (c[i] == 'l' || c[i] == 'n')
        {
            cnt += 1;
            i++;
            if (c[i] == 'j')
                i++;
        }
        else if (c[i] == 's' || c [i] == 'z')
        {
            cnt += 1;
            i++;
            if (c[i] == '=')
                i++;
        }
        else
        {
            cnt += 1;
            i++;
        }
        
    }

    cout << cnt;

    return 0;
}