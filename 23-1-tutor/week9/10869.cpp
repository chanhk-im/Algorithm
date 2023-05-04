#include <iostream>
#include <vector>

using namespace std;

int a,b;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin >> a >> b;
    cout << a+b << '\n' << a-b << '\n' << a*b << '\n' << a/b << '\n' << a%b;
    return 0;
}