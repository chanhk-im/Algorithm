#include <bits/stdc++.h>

using namespace std;

char buff[100005];
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

    for (int i = 0; i < strlen(buff); i++)
        left.push(buff[i]);

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