#include <bits/stdc++.h>

using namespace std;

int _max = INT_MIN;
int _min = INT_MAX;
int a[12], to[4];
vector<int> o;
int n;

bool check_oper(int oper)
{
    int cnt = 0;
    for (int i = 0; i < o.size(); i++)
    {
        if (oper == o[i])
            cnt += 1;
    }
    if (cnt < to[oper])
        return true;
    else
        return false;
}

void dfs(int l, int val)
{
    if (l >= n - 1)
    {
        if (val > _max)
            _max = val;
        if (val < _min)
            _min = val;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        if (check_oper(i))
        {
            o.push_back(i);
            switch (i)
            {
            case 0:
                dfs(l + 1, val + a[l + 1]);
                break;
            case 1:
                dfs(l + 1, val - a[l + 1]);
                break;
            case 2:
                dfs(l + 1, val * a[l + 1]);
                break;
            case 3:
                dfs(l + 1, val / a[l + 1]);
                break;
            }
            o.pop_back();
        }
    }
    
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < 4; i++)
        cin >> to[i];

    dfs(0, a[0]);
    cout << _max << '\n' << _min;
    
    return 0;
}