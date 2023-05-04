#include <iostream>

using namespace std;

int n, k;
int coin[105];
int num[10005];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> coin[i];
    }
    for (int value = 1; value <= k; value++) {
        int min_value = 100001;
        bool flag = false;
        for (int j = 0; j < n; j++) {
            if (coin[j] <= value && num[value - coin[j]] > -1) {
                flag = true;
                if (num[value - coin[j]] < min_value) {
                    min_value = num[value - coin[j]];
                }
                
            }
        }
        num[value] = flag ? min_value + 1 : -1;
    }

    cout << num[k] << '\n';
}