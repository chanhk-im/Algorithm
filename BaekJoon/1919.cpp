#include <bits/stdc++.h>

using namespace std;

int cnt[26] = {0, };
string s1, s2;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> s1 >> s2;
    int res = 0;

    for (char c : s1) {
        cnt[c - 'a']++;
    }

    for (char c : s2) {
        if (cnt[c - 'a'] > 0) {
            cnt[c - 'a']--;
        }
        else {
            res++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (cnt[i] > 0) { 
            res += cnt[i];
        }
    }

    cout << res << '\n';
    
    return 0;
}