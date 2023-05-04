#include <iostream>
#include <stack>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string brackets;

    cin >> brackets;
    stack<int> s;
    int curr_stick_cnt = 0;
    int stick_cnt = 0;
    int result = 0;

    for (int i = 0; i < brackets.size(); i++) {
        if (brackets[i] == '(') {
            s.push(1);
            curr_stick_cnt++;
            stick_cnt++;
        }
        else {
            curr_stick_cnt--;
            if (brackets[i - 1] == '(') {
                stick_cnt--;
                result += curr_stick_cnt;
            }
            s.pop();
        }
    }
    result += stick_cnt;
    cout << result << '\n';
}