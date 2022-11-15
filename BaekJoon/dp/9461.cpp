#include <bits/stdc++.h>

using namespace std;

int t;
int n;
long long dp[101] = {1, 1, 1, 2, 2, };

long long pado(int n)
{
    if (dp[n] <= 0)
        dp[n] = pado(n - 1) + pado(n - 5);
    
    return dp[n];
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cout << pado(n - 1) << '\n';
    }
    
    return 0;
}