#include <bits/stdc++.h>

using namespace std;

void reverse(int *arr, int b, int e) {
    int d = e - b;
    for (int i = b; i < b + (d + 1) / 2; i++) {
        int tmp = arr[i];
        arr[i] = arr[e - i + b];
        arr[e - i + b] = tmp;
    }
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n[20];

    for (int i = 0; i < 20; i++) {
        n[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        int ai, bi;

        cin >> ai >> bi;
        ai--;
        bi--;

        reverse(n, ai, bi);
    }

    for (int i = 0; i < 20; i++) {
        cout << n[i] << " ";
    }
    cout << "\n";
    
    return 0;
}