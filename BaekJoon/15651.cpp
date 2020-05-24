#include <bits/stdc++.h>

using namespace std;

int n, m;
int c[10];

void combination(int l)
{
    if (l >= m)
    {
        for (int i = 0; i < m; i++)
            cout << c[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        c[l] = i;
        combination(l + 1);
    }
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    combination(0);

    return 0;
}