#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    char word[5][20];
    int max_len = -1;

    for (int i = 0; i < 5; i++)
    {
        cin >> word[i];
        if ((int)strlen(word[i]) > max_len)
            max_len = (int)strlen(word[i]);
    }
    
    int i = 0;
    while (i < max_len)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i < (int)strlen(word[j]))
                cout << word[j][i];
        }
        i++;
    }
    
    return 0;
}