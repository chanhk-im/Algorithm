#include <bits/stdc++.h>

using namespace std;

int dp[51][51][51];

int w(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 1;
    }
    else if (a > 20 || b > 20 || c > 20) {
        if (dp[a][b][c] == -1) {
            dp[a][b][c] = w(20, 20, 20);
        }
        return dp[a][b][c];
    }
    else if (a < b && b < c) {
        if (dp[a][b][c] == -1) {
            dp[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
        }
        return dp[a][b][c];
    }

    if (dp[a][b][c] == -1) {
        dp[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
    }
    return dp[a][b][c];
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    fill(dp[0][0], dp[50][50] + 51, -1);

    int a, b, c;

    while (true) {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1) {
            break;
        }

        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
    }
    
    return 0;
}