#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    stack<int> s;
    int k, n;
    int sum = 0;

    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> n;
        if (n == 0)
            s.pop();
        else
            s.push(n);
    }

    int l = s.size();
    for (int i = 0; i < l; i++)
    {
        sum += s.top();
        s.pop();
    }

    cout << sum;

    return 0;
}