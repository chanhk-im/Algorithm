#include <bits/stdc++.h>

using namespace std;

int m, n;
int p[10];

bool check_confilct(int l, int n)
{
    for (int i = 0; i < l; i++)
    {
        if (n <= p[i])
            return false;
    }
    return true;
}

void permutation(int l)
{
    if (l >= m)
    {
        for (int i = 0; i < m; i++)
            cout << p[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (check_confilct(l, i))
        {
            p[l] = i;
            permutation(l + 1);
        }
    }
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n >> m;

    permutation(0);

    return 0;
}