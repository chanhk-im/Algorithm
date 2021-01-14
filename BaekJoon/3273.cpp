#include <bits/stdc++.h>

using namespace std;

int n, x;
vector<int> arr(100005);
vector<int> num_cnt(2000005, 0);

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int cnt = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (arr[i] <= x) {
            if (num_cnt[x - arr[i]] > 0) {
                cnt += num_cnt[x - arr[i]];
            }
        }
        num_cnt[arr[i]]++;
    }

    cout << cnt << '\n';
    
    return 0;
}