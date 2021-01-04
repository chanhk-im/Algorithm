#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n[3];
    int tmp;

    for (int i = 0; i < 3; i++) {
        scanf("%d", &n[i]);
    }

    if (n[0] > n[1]) {
        tmp = n[0];
        n[0] = n[1];
        n[1] = tmp;
    }

    if (n[1] > n[2]) {
        tmp = n[1];
        n[1] = n[2];
        n[2] = tmp;
    }

    if (n[0] > n[1]) {
        tmp = n[0];
        n[0] = n[1];
        n[1] = tmp;
    }
    
    for (int i = 0; i < 3; i++) {
        printf("%d ", n[i]);
    }

    return 0;
}