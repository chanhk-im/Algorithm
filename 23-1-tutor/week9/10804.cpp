#include <iostream>
#include <vector>

using namespace std;
int n[21];
int main() {
    for (int i = 1; i <= 20; i++) {
        n[i] = i;
    }

    for (int i = 0; i < 10; i++) {
        int a, b;
        cin >> a >> b;

        while (a < b) {
            int tmp = n[a];
            n[a] = n[b];
            n[b] = tmp;
            a++;
            b--;
        }
    }

    for (int i = 0; i < 20; i++) {
        cout << n[i+1] << ' ';
    }
    return 0;
}