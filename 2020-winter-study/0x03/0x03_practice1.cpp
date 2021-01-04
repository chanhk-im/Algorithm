#include <bits/stdc++.h>

using namespace std;

int func2(int arr[], int N) {
    int n_arr[101] = {0, };

    for (int i = 0; i < N; i++) {
        if (n_arr[100 - arr[i]] > 0) {
            return 1;
        }
        n_arr[arr[i]]++;
    }

    return 0;
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n1[3] = {1, 52, 48};
    int n2[2] = {50, 42};
    int n3[4] = {4, 13, 63, 87};

    cout << func2(n1, 3) << '\n';
    cout << func2(n2, 2) << '\n';
    cout << func2(n3, 4) << '\n';
    
    return 0;
}