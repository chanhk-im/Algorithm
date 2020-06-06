#include <bits/stdc++.h>

using namespace std;

int count0[44];
int count1[44];

int fibonacci0(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 0;
    if (!count0[n])
        count0[n] = fibonacci0(n - 1) + fibonacci0(n - 2);
    return count0[n];
}

int fibonacci1(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (!count1[n])
        count1[n] = fibonacci1(n - 1) + fibonacci1(n - 2);
    return count1[n];
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cout << fibonacci0(n) << ' ' << fibonacci1(n) << '\n';
    }
    
    return 0;
}