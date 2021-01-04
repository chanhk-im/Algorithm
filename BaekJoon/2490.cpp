#include <bits/stdc++.h>

using namespace std;

int main()
{
    int u;
    int cnt;

    for (int i = 0; i < 3; i++) {
        cnt = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &u);
            if (u == 1) {
                cnt++;
            }
        }

        switch (cnt) {
            case 0:
            printf("D\n");
            break;

            case 1:
            printf("C\n");
            break;

            case 2:
            printf("B\n");
            break;

            case 3:
            printf("A\n");
            break;

            case 4:
            printf("E\n");
            break;
        }
    }
    
    return 0;
}