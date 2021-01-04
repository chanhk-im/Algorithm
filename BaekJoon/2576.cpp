#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int odd_min = 111;
    int sum = 0;
    int n;

    for (int i = 0; i < 7; i++) {
        cin >> n;
        if (n % 2 != 0) {
            if (n < odd_min) {
                odd_min = n;
            }

            sum += n;
        }
    }

    if (sum == 0) {
        cout << -1 << "\n";
    }
    else {
        cout << sum << "\n" << odd_min << "\n";
    }
    
    return 0;
}