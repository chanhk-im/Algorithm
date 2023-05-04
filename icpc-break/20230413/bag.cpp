#include <iostream>

using namespace std;

int n, k;
int w[105];
int v[105];
int b[105][100005];

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (w[i] > j) {
                b[i][j] = b[i - 1][j];
            }
            else {
                int ls = b[i - 1][j];
                int rs = b[i - 1][j - w[i]] + v[i];
                b[i][j] = ls > rs ? ls : rs;
            }
        }
    }

    cout << b[n][k] << '\n';
}