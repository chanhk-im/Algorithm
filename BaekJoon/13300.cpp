#include <bits/stdc++.h>

using namespace std;

int N, K;
int student[6][2] = {0, };

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int cnt = 0;

    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        int S, Y;
        cin >> S >> Y;
        student[Y - 1][S]++;
    }

    for (int i = 0; i < 6; i++) {
        cnt += (student[i][0] + K - 1) / K;
        cnt += (student[i][1] + K - 1) / K;
    }

    cout << cnt << '\n';
    
    return 0;
}