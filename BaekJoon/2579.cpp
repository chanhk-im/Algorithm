#include <bits/stdc++.h>

using namespace std;

int score[300];
int dp[300][2];
int n;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;

    fill(dp[0], dp[299] + 2, -1);

    for (int i = 0; i < n; i++) {
        cin >> score[i];
    }

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            dp[i][0] = score[i];
        }
        else if (i == 1) {
            dp[i][0] = score[i];
            dp[i][1] = dp[i - 1][0] + score[i];
        }
        else {
            if (dp[i - 2][1] == -1 || dp[i - 2][0] > dp[i - 2][1]) {
                dp[i][0] = dp[i - 2][0] + score[i];
            }
            else {
                dp[i][0] = dp[i - 2][1] + score[i];
            }

            dp[i][1] = dp[i - 1][0] + score[i];
        }
    }

    cout << ((dp[n - 1][0] > dp[n - 1][1]) ? dp[n - 1][0] : dp[n - 1][1]) << '\n';
    
    return 0;
}