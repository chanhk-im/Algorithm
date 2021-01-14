#include <bits/stdc++.h>

using namespace std;

int n_tile[1000001];
int N;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> N;
    n_tile[0] = 0;
    n_tile[1] = 1;
    n_tile[2] = 2;

    for (int i = 3; i <= N; i++) {
        n_tile[i] = (n_tile[i - 1] + n_tile[i - 2]) % 15746;
    }

    cout << n_tile[N] << '\n';
    
    return 0;
}