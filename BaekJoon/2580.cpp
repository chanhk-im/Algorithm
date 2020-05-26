#include <bits/stdc++.h>

using namespace std;
int sudoku[10][10];

bool check_conflict(int h, int w, int n)
{
    int bh = h / 3 * 3;
    int bw = w / 3 * 3;
    for (int i = 0; i < 9; i++)
    {
        if (i != w && sudoku[h][i] == n)
            return false;
        if (i != h && sudoku[i][w] == n)
            return false;
        if (bh + i / 3 != w && bw + i % 3 != h && sudoku[bh + i / 3][bw + i % 3] == n)
            return false;
    }
    return true;
}

void print_sudoku()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
            cout << sudoku[i][j] << ' ';
        cout << '\n';
    }
}

void dfs(int l)
{
    int h = l / 9;
    int w = l % 9;

    if (l >= 81)
    {
        print_sudoku();
        exit(0);
    }
    if (sudoku[h][w]) 
    {
        dfs(l + 1);
        return;
    }
    for (int i = 1; i <= 9; i++)
    {
        if (check_conflict(h, w, i))
        {
            sudoku[h][w] = i;
            dfs(l + 1);
        }
    }

    sudoku[h][w] = 0;
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
            cin >> sudoku[i][j];
    }
    dfs(0);

    return 0;
}