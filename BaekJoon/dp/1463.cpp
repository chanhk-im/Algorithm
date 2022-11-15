#include <bits/stdc++.h>

using namespace std;

int dp[1000005];
int N;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    fill(dp, dp + 1000005, -1);

    cin >> N;

    dp[1] = 0;
    for (int i = 2; i <= N; i++) {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0) {
            dp[i] = (dp[i] < dp[i / 2] + 1) ? dp[i] : dp[i / 2] + 1;
        }
        if (i % 3 == 0) {
            dp[i] = (dp[i] < dp[i / 3] + 1) ? dp[i] : dp[i / 3] + 1;
        }
    }

    cout << dp[N] << '\n';
    
    return 0;
}