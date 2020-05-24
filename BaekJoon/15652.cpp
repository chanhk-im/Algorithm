#include <bits/stdc++.h>

using namespace std;

int n, m;
int c[10];

bool check_conflict(int l, int n)
{
    if (l == 0 || c[l - 1] <= n)
        return true;
    else
        return false;
}

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
        if (check_conflict(l, i))
        {
            c[l] = i;
            combination(l + 1);
        }
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