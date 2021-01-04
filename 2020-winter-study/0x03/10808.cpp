#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    vector<int> n(26);

    string s;
    cin >> s;

    for (char c = 'a'; c <= 'z'; c++) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == c) {
                n[c - 'a']++;
            }
        }
    }

    for (int i = 0; i < n.size(); i++) {
        cout << n[i] << ' ';
    }
    cout << '\n';
    
    return 0;
}