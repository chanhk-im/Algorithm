#include <bits/stdc++.h>

using namespace std;

int N;
int cnt[26] = {0, };
string s1, s2;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> N;
    
    for (int i = 0; i < N; i++) {
        fill(cnt, cnt + 26, 0);
        cin >> s1 >> s2;

        for (char c : s1) {
            cnt[c - 'a']++;
        }

        for (char c : s2) {
            cnt[c - 'a']--;
        }
        
        bool possible = true;

        for (int i = 0; i < 26; i++) {
            if (cnt[i] != 0) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "Possible\n"; 
        }
        else {
            cout << "Impossible\n";
        }
    }
    
    return 0;
}