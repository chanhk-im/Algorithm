#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    stack<int> bucket;
    queue<int> seq;
    queue<char> res;

    cin >> n;
    int iter = 1;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        seq.push(num);
    }

    while (!seq.empty()) {
        int curr = seq.front();
        seq.pop();

        for (int i = iter; i <= curr; i++, iter++) {
            bucket.push(i);
            res.push('+');
        }

        if (curr == bucket.top()) {
            bucket.pop();
            res.push('-');
        }
        else {
            cout << "NO\n";
            exit(0);
        }
    }

    while (!res.empty()) {
        cout << res.front() << '\n';
        res.pop();
    }
    
    return 0;
}