#include <bits/stdc++.h>

using namespace std;

int n;
int min_cost = __INT_MAX__;
int cost[1001][3];
int dp[1001][3];

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> cost[i][j];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0)
                dp[i][j] = cost[i][j];
            else
            {
                switch (j)
                {
                case 0:
                    dp[i][j] = (dp[i - 1][1] > dp[i - 1][2]) ? dp[i - 1][2] + cost[i][j] : dp[i - 1][1] + cost[i][j];
                    break;
                
                case 1:
                    dp[i][j] = (dp[i - 1][0] > dp[i - 1][2]) ? dp[i - 1][2] + cost[i][j] : dp[i - 1][0] + cost[i][j];
                    break;
                
                case 2:
                    dp[i][j] = (dp[i - 1][0] > dp[i - 1][1]) ? dp[i - 1][1] + cost[i][j] : dp[i - 1][0] + cost[i][j];
                    break;
                }
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (dp[n - 1][i] < min_cost)
            min_cost = dp[n - 1][i];
    }

    cout << min_cost << '\n';

    return 0;
}