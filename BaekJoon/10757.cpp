#include <bits/stdc++.h>

using namespace std;

char a[10005], b[10005];
char sum[10005];
char *sum_p;

int main() {
    char buff;
    int cnt = 0;
    int len;
    int carry = 0;
    int ia = 0, ib = 0;

    while (true) {
        scanf("%c", &buff);
        if (buff == ' ' || buff == '\n') {
            break;
        }

        a[cnt] = buff;
        cnt++;
    }
    a[cnt] = '\0';

    cnt = 0;
    while (true) {
        scanf("%c", &buff);
        if (buff == ' ' || buff == '\n') {
            break;
        }

        b[cnt] = buff;
        cnt++;
    }
    b[cnt] = '\0';
    
    len = (strlen(a) > strlen(b)) ? strlen(a) : strlen(b);
    ia = strlen(a) - 1;
    ib = strlen(b) - 1;

    sum[len + 1] = '\0';

    for (int i = len - 1; i >= 0; i--) {
        int na, nb;
        int ns;

        if (ia < 0) {
            na = 0;
        }
        else {
            na = a[ia] - '0';
        }

        if (ib < 0) {
            nb = 0;
        }
        else {
            nb = b[ib] - '0';
        }
        ns = na + nb + carry;
        carry = ns / 10;
        ns -= carry * 10;
        sum[i + 1] = ns + '0';

        ia--;
        ib--;
    }
    if (carry > 0) {
        sum[0] = carry + '0';
        sum_p = sum;
    }
    else {
        sum_p = sum + 1;
    }

    printf("%s\n", sum_p);
    return 0;
}