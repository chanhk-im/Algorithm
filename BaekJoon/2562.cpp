#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, max, max_idx;
    max = 0;
    max_idx = 0;

    for (int i = 0; i < 9; i++) {
        cin >> n;

        if (max < n) {
            max = n;
            max_idx = i + 1;
        }
    }

    cout << max << "\n" << max_idx;
    
    return 0;
}