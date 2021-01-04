#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y;
    scanf("%d", &y);

    if (y % 4 == 0) {
        if (y % 100 != 0 || y % 400 == 0) {
            printf("1\n");
        }
        else {
            printf("0\n");
        }
    }
    else {
        printf("0\n");
    }
    
    return 0;
}