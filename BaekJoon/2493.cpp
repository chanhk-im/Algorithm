#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> N;

    vector<int> res;
    vector<int> tower;

    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        tower.push_back(tmp);

        int curr = i - 1;
        while (curr >= 0) {
            if (tmp < tower[curr]) {
                break;
            }

            curr = res[curr] - 1;
        }

        res.push_back(curr + 1);
    }

    for (int n : res) {
        cout << n << ' ';
    }
    cout << '\n';
    
    return 0;
}