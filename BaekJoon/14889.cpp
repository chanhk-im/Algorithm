#include <bits/stdc++.h>

using namespace std;

vector<int> start;
vector<int> link;

int status[22][22];
int n;
int min_diff = INT_MAX;

bool can_insert(int p, vector<int> team)
{
    if (team.size() >= n / 2)
        return false;
    return true;
}

void dfs(int l)
{
    if (l >= n)
    {
        int ssum = 0;
        int lsum = 0;

        for (int i = 0; i < start.size(); i++)
        {
            for (int j = 0; j < start.size(); j++)
                ssum += status[start[i]][start[j]];
        }
        for (int i = 0; i < link.size(); i++)
        {
            for (int j = 0; j < link.size(); j++)
                lsum += status[link[i]][link[j]];
        }

        if (abs(ssum - lsum) < min_diff)
            min_diff = abs(ssum - lsum);

        return;
    }

    if (can_insert(l + 1, start))
    {
        start.push_back(l);
        dfs(l + 1);
        start.pop_back();
    }

    if (can_insert(l + 1, link))
    {
        link.push_back(l);
        dfs(l + 1);
        link.pop_back();
    }
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
            cin >> status[i][j];
    }

    dfs(0);

    cout << min_diff << '\n';
    
    return 0;
}