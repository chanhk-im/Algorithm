#include <iostream>
#include <vector>

using namespace std;
int y;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin >> y;
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) cout << 1;
    else cout << 0;
    return 0;
}