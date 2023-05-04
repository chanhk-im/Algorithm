#include <iostream>
#include <stack>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string sentence;

    while (true) {
        getline(cin, sentence);
        stack<char> s;
        bool result = true;

        if (sentence.size() == 1 && sentence[0] == '.') break;
        for (char c: sentence) {
            switch(c) {
            case '(':
                s.push('(');
                break;
            case '[':
                s.push('[');
                break;
            case ')':
                if (s.empty()) {
                    result = false;
                    break;
                }
                if (s.top() == '(') {
                    s.pop();
                } else {
                    result = false;
                }
                break;
            case ']':
                if (s.empty()) {
                    result = false;
                    break;
                }
                if (s.top() == '[') {
                    s.pop();
                } else {
                    result = false;
                }
                break;
            }
            if (!result) break;
        }
        if (!s.empty()) result = false;
        if (result) cout << "yes\n";
        else cout << "no\n";
    }
}