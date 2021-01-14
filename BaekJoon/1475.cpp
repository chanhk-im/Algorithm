#include <bits/stdc++.h>

using namespace std;

int N;
int num_cnt[9];

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> N;

    if (N == 0) {
        num_cnt[0]++;
    }

    while (N > 0) {
        if (N % 10 == 9) {
            num_cnt[6]++;
        }
        else {
            num_cnt[N % 10]++;
        }

        N /= 10;
    }

    int max_num = 0;

    for (int i = 0; i < 9; i++) {
        if (i == 6) {
            if ((num_cnt[i] + 1) / 2 > max_num) {
                max_num = (num_cnt[i] + 1) / 2;
            }
        }
        else {
            if (num_cnt[i] > max_num) {
                max_num = num_cnt[i];
            }
        }
        
    }

    cout << max_num << '\n';
    
    return 0;
}