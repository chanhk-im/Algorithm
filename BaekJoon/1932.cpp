#include <bits/stdc++.h>

using namespace std;

int n;
int tri[501][501];
int dp[501][501];
int _max = -1;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cin >> tri[i][j];
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            dp[0][0] = tri[0][0];
        else
        {
            for (int j = 0; j <= i; j++)
            {
                if (j == 0)
                    dp[i][j] = dp[i - 1][0] + tri[i][j];
                else if (j == i)
                    dp[i][j] = dp[i - 1][j - 1] + tri[i][j];
                else
                {
                    dp[i][j] = ((dp[i - 1][j - 1] > dp[i - 1][j]) ? dp[i - 1][j - 1] : dp[i - 1][j]) + tri[i][j];
                }
                
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if (_max < dp[n - 1][i])
            _max = dp[n - 1][i];
    }

    cout << _max << '\n';

    return 0;
}