#include <bits/stdc++.h>

using namespace std;

int n, m;
list<int> seq;

bool check_num(int n)
{
    list<int>::iterator curr = seq.begin();
    for (int i = 0; i < seq.size(); i++)
    {
        if (n == *curr)
            return false;

        curr++;
    }

    return true;
}

void search_seq(int l)
{
    if (l >= m)
    {
        list<int>::iterator curr = seq.begin();
        for (int i = 0; i < m; i++)
        {
            cout << *curr << ' ';
            curr++;
        }
        cout << '\n';
        seq.pop_back();
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (check_num(i))
        {
            seq.push_back(i);
            search_seq(l + 1);
        }
    }
    if (!seq.empty())
        seq.pop_back();
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n >> m;

    search_seq(0);

    return 0;
}