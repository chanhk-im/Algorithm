#include <bits/stdc++.h>

using namespace std;

int tile_table[1000] = {0, };
int _size = 0;

int tile(int n) {
    if (n == 1) return 1;
    else if (n == 2) return 2;

    if (tile_table[n - 1] == -1) 
        tile_table[n - 1] = (tile(n - 1) + tile(n - 2)) % 10007;
    return tile_table[n - 1];
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> _size;

    for (int i = 0; i < _size; i++)
        tile_table[i] = -1;

    cout << tile(_size) << '\n';
    
    return 0;
}