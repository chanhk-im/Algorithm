#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n[5];
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> n[i];
        sum += n[i];

        for (int j = 0; j < i; j++) {
            if (n[i] < n[j]) {
                int tmp = n[i];
                for (int k = j; k < 4; k++) {
                    n[k + 1] = n[k];
                }
                n[j] = tmp;
            }
        }
    }

    cout << sum / 5 << "\n" << n[2] << "\n";
    
    return 0;
}