#include <bits/stdc++.h>

using namespace std;

int a, b, c;
int cnt[10] = {0, };

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> a >> b >> c;

    int n = a * b * c;

    while (n > 0) {
        cnt[n % 10]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        cout << cnt[i] << '\n';
    }
    
    return 0;
}