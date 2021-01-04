#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    int m;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        m = 10000 + a * 1000;
    }
    else if (a == b && b != c) {
        m = 1000 + a * 100;
    }
    else if (a == c && b != c) {
        m = 1000 + a * 100;
    }
    else if (b == c && a != b) {
        m = 1000 + b * 100;
    }
    else {
        if (a > b && a > c) {
            m = a * 100;
        }
        else if (b > a && b > c) {
            m = b * 100;
        }
        else if (c > a && c > b) {
            m = c * 100;
        }
    }

    printf("%d\n", m);
    
    return 0;
}