#include <iostream>
#include <stack>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    string p_string;
    stack<int> s;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p_string;

        bool result = true;
        for (char c: p_string) {
            if (c == '(') {
                s.push(1);
            }
            else if (s.empty()) {
                result = false;
                break;
            }
            else {
                s.pop();
            }
        }
        if (!s.empty()) result = false;
        if (result) cout << "YES\n";
        else cout << "NO\n";
        while(!s.empty()) s.pop();
    }



    return 0;
}
