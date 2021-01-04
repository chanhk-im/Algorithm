#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a[10], b[10];
    int ac = 0, bc = 0;

    for (int i = 0; i < 10; i++)
        cin >> a[i];
    
    for (int i = 0; i < 10; i++)
        cin >> b[i];

    for (int i = 0; i < 10; i++)
    {
        if (a[i] > b[i])
            ac++;
        else if (a[i] < b[i])
            bc++;
    }

    cout << ((ac > bc) ? 'A' : ((ac < bc) ? 'B' : 'D')) << '\n';
    return 0;
}