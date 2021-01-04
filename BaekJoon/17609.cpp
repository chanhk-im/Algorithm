#include <bits/stdc++.h>

using namespace std;

string s;

int is_palindrome(string s) {
    int cnt = 0;
    int left = 0, right = s.length() - 1;

    while (left <= right) {
        if (s[left] == s[right]) {
            left++;
            right--;
        }
        else {
            int sl, sr, scnt;

            sl = left + 1;
            sr = right;
            scnt = 0;
            
            while (sl <= sr) {
                if (s[sl] == s[sr]) {
                    sl++;
                    sr--;
                }
                else {
                    scnt++;
                    break;
                }
            }
            if (scnt == 0) {
                return 1;
            }

            sl = left;
            sr = right - 1;
            scnt = 0;
            
            while (sl <= sr) {
                if (s[sl] == s[sr]) {
                    sl++;
                    sr--;
                }
                else {
                    scnt++;
                    break;
                }
            }

            if (scnt == 0) {
                return 1;
            }

            return 2;
        }
    }
    return cnt;
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t;
    
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> s;

        cout << is_palindrome(s) << "\n";       
    }
    
    return 0;
}