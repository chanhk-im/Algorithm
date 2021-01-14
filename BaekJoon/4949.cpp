#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    char buff = '1';
    int cnt = 0;
    stack<char> b;
    do {
        cnt = 0;
        while (buff != '.') {
            cin >> buff;
            cnt++;

            if (buff == '(' || buff == '[' || buff == '{') {
                b.push(buff);
            }
            else if (buff == ')') {
                if (b.top() == '(') {

                }
            }
        }
        
    } while (cnt > 0);
    
    return 0;
}