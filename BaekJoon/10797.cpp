#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int day, car[5];
    int illegal = 0;

    cin >> day;
    for (int i = 0; i < 5; i++)
    {
        cin >> car[i];
        if (car[i] == day % 10)
            illegal++;
    }
    cout << illegal << '\n';

    return 0;
}