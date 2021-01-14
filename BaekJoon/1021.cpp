#include <bits/stdc++.h>

using namespace std;

int N, M;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    deque<int> q;

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        q.push_back(i + 1);
    }

    int res = 0;
    for (int i = 0; i < M; i++) {
        int num;
        cin >> num;

        int cnt = 0;
        while (q.front() != num) {
            q.push_back(q.front());
            q.pop_front();
            cnt++;
        }

        if (cnt < q.size() - cnt) {
            res += cnt;
        }
        else {
            res += q.size() - cnt;
        }

        q.pop_front();
    }

    cout << res << '\n';
    
    return 0;
}