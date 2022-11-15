#include <bits/stdc++.h>

using namespace std;

int t, n;
int score[100004][2];
int dp[100004][2];

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int j = 0; j < n; j++) 
            cin >> score[j][0];
        for (int j = 0; j < n; j++) 
            cin >> score[j][1];

        fill(&dp[0][0], &dp[100003][2], -1);

        dp[0][0] = score[0][0];
        dp[0][1] = score[0][1];

        dp[1][0] = dp[0][0] + score[1][1];
        dp[1][1] = dp[0][1] + score[1][0];

        for (int j = 2; j < n; j++) {
            if (j % 2 == 0) {
                dp[j][0] = dp[j - 1][0] + score[j][0] > dp[j - 2][1] + score[j][0] ? dp[j - 1][0] + score[j][0] : dp[j - 2][1] + score[j][0]; 
                dp[j][1] = dp[j - 1][1] + score[j][1] > dp[j - 2][0] + score[j][1] ? dp[j - 1][1] + score[j][1] : dp[j - 2][0] + score[j][1]; 
            } else {
                dp[j][0] = dp[j - 1][0] + score[j][1] > dp[j - 2][1] + score[j][1] ? dp[j - 1][0] + score[j][1] : dp[j - 2][1] + score[j][1]; 
                dp[j][1] = dp[j - 1][1] + score[j][0] > dp[j - 2][0] + score[j][0] ? dp[j - 1][1] + score[j][0] : dp[j - 2][0] + score[j][0]; 
            }
        }
        cout << (dp[n - 1][0] > dp[n - 1][1] ? dp[n - 1][0] : dp[n - 1][1]) << '\n';
    }


    return 0;
}