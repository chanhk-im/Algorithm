#include <bits/stdc++.h>

using namespace std;

int num[101];

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N, v;
    int cnt = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    cin >> v;

    for (int i = 0; i < N; i++) {
        if (num[i] == v) {
            cnt++;
        }
    }

    cout << cnt << '\n';
    
    return 0;
}