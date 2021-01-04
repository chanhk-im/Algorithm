#include <bits/stdc++.h>

using namespace std;

int is_not_self[10000] = {0, };

int main() {
    for (int i = 1; i <= 10000; i++) {
        int s = i;
        string str = to_string(i);
        for (int j = 0; j < str.length(); j++) {
            s += str[j] - '0';
        }
        is_not_self[s - 1] = 1;
    }

    for (int i = 0; i < 10000; i++) {
        if (is_not_self[i] == 0) {
            printf("%d\n", i + 1);
        }
    }
    return 0;
}