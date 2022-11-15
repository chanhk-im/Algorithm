#include <bits/stdc++.h>

using namespace std;

int ans;
int n;
int board[16][16];

bool check_conflict(int h, int w)
{
    for (int i = 0; i < n; i++)
    {
        if (board[h][i] || board[i][w])
            return false;
        if (0 <= h - w + i && h - w + i < n)
        {
            if (board[h - w + i][i])
                return false;
        }
        if (0 <= h + w - i && h + w - i < n)
        {
            if (board[h + w - i][i])
                return false;
        }
    }
    return true;
}

void dfs(int l)
{
    if (l >= n)
    {
        ans += 1;
        return;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (check_conflict(l, i))
        {
            board[l][i] = 1;
            dfs(l + 1);
            board[l][i] = 0;
        }
    }
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;
    dfs(0);
    cout << ans;

    return 0;
}