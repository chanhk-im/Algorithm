#include <bits/stdc++.h>

using namespace std;

int N, K;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    queue<int> people;
    queue<int> seq;

    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        people.push(i + 1);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K - 1; j++) {
            int curr = people.front();
            people.pop();
            people.push(curr);
        }
        int curr = people.front();
        people.pop();
        seq.push(curr);
    }

    cout << '<';
    while (!seq.empty()) {
        cout << seq.front();
        seq.pop();

        if (!seq.empty()) {
            cout << ", ";
        }
    }
    cout << ">\n";
    
    return 0;
}