#include <bits/stdc++.h>

using namespace std;

int T;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> T;

    for (int i = 0; i < T; i++) {
        int n, tmp;
        bool is_error = false;
        bool is_rev = false;
        string func;
        string buff;
        deque<int> arr;

        cin >> func;
        cin >> n;
        cin >> buff;

        for (int i = 0; i < buff.size(); i++) {
            int tmp = 0;
            if (buff[i] >= '0' && buff[i] <= '9') {
                while (buff[i] >= '0' && buff[i] <= '9') {
                    tmp += buff[i] - '0';
                    tmp *= 10;
                    i++;
                }
                tmp /= 10;
                arr.push_back(tmp);
            }
        }

        for (char c : func) {
            if (c == 'R') {
                is_rev = !is_rev;
            }
            else if (c == 'D') {
                if (arr.size() == 0) {
                    is_error = true;
                    break;
                }
                if (is_rev) {
                    arr.pop_back();
                }
                else {
                    arr.pop_front();
                }
            }
        }

        if (is_error) {
            cout << "error\n";
        }
        else {
            cout << '[';
            if (is_rev) {
                while (!arr.empty()) {
                    cout << arr.back();
                    arr.pop_back();
                    if (!arr.empty()) {
                        cout << ',';
                    }
                }
            }
            else {
                while (!arr.empty()) {
                    cout << arr.front();
                    arr.pop_front();
                    if (!arr.empty()) {
                        cout << ',';
                    }
                }
            }
            cout << "]\n";
        }
    }
    
    return 0;
}