#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;

    int n;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int cnt = 0;
        
        for (int j = 5; j <= n; j *= 5)
            cnt += n / j;

        cout << cnt << '\n';
    }

    return 0;
}