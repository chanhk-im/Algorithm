#include <bits/stdc++.h>

using namespace std;

string buff;
char c;

int m;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    stack<char> left;
    stack<char> right;

    cin >> buff;
    cin >> m;

    for (char c : buff) {
        left.push(c);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> c;

        if (c == 'L')
        {
            if (!left.empty())
            {
                right.push(left.top());
                left.pop();
            }
        }
        else if (c == 'D')
        {
            if (!right.empty())
            {
                left.push(right.top());
                right.pop();
            }
        }
        else if (c == 'B')
        {
            if (!left.empty())
                left.pop();
        }
        else if (c == 'P')
        {
            cin >> c;
            left.push(c);
        }
    }

    while (!left.empty())
    {
        right.push(left.top());
        left.pop();
    }

    while (!right.empty())
    {
        cout << right.top();
        right.pop();
    }
    cout << '\n';
    
    return 0;
}