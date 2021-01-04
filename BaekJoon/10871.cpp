#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    int num;
    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num < x) {
            printf("%d ", num);
        }
    }
}