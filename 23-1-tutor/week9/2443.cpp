#include <iostream>
#include <vector>

using namespace std;
int n;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << ' ';
        }
        for (int j = 0; j < (2*n-1) - 2*i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}