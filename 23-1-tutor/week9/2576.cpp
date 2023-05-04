#include <iostream>
#include <vector>

using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int s = 0;
    int min = 2147483647;
    for (int i = 0; i < 7; i++) {
        int n;
        cin >> n;
        if (n % 2 == 1) {
            s += n;
            if (n < min) min = n;
        }
    }
    cout << s << '\n' << min;
    return 0;
}