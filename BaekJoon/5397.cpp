#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        stack<char> left, right;
        cin >> s;
        
        for (char c : s) {
            if (c == '<') {
                if (left.size() > 0) {
                    right.push(left.top());
                    left.pop();
                }
            }
            else if (c == '>') {
                if (right.size() > 0) {
                    left.push(right.top());
                    right.pop();
                }
            }
            else if (c == '-') {
                if (left.size() > 0) {
                    left.pop();
                }
            }
            else {
                left.push(c);
            }
        }

        while (!left.empty()) {
            right.push(left.top());
            left.pop();
        }

        while (!right.empty()) {
            cout << right.top();
            right.pop();
        }

        cout << '\n';
    }
    
    return 0;
}