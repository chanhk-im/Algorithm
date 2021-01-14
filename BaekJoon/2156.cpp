#include <bits/stdc++.h>

using namespace std;

int n, max_wine;
int wine[10005];
int dp[10005][2];

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    fill(dp[0], dp[10005] + 2, -1);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> wine[i];
    }

    dp[0][0] = wine[0];
    dp[1][0] = wine[1];
    dp[1][1] = wine[0] + wine[1];

    max_wine = 0;

    for (int i = 2; i < n; i++) {
        if (dp[i - 2][0] != -1 && dp[i - 2][0] > max_wine) {
            max_wine = dp[i - 2][0];       
        }
        if (dp[i - 2][1] != -1 && dp[i - 2][1] > max_wine) {
            max_wine = dp[i - 2][1];       
        }

        dp[i][0] = max_wine + wine[i];
        dp[i][1] = dp[i - 1][0] + wine[i];
    }

    for (int i = n - 2; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            if (dp[i][j] != -1 && dp[i][j] > max_wine) {
                max_wine = dp[i][j];
            }
        }
    }

    cout << max_wine << '\n';
    
    return 0;
}