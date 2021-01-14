#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    stack<pair<long long, int>> tower;
    vector<long long> t_arr;
    long long cnt = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        long long tmp;
        cin >> tmp;
        t_arr.push_back(tmp);
    }

    for (int i = 0; i < N; i++) {
        pair<long long, int> t = make_pair(t_arr[N - 1 - i], N - 1 - i);
        bool flag = false;

        while (!tower.empty()) {
            pair<long long, int> curr = tower.top();
            if (t.first <= curr.first) {
                cnt += curr.second - t.second - 1;
                flag = !flag;
                break;
            }
            tower.pop();
        }
        if (!flag) {
            cnt += i;
        }
        tower.push(t);
    }

    cout << cnt << '\n';
    
    return 0;
}