#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    char buffer[100005];
    int curr_stick = 0;
    int cnt = 0;

    cin >> buffer;

    int i = 0;
    while (buffer[i] != '\0')
    {
        if (buffer[i] == '(')
        {
            if (buffer[i + 1] == ')')
            {
                cnt += curr_stick;
                i++;
            }
            else
            {
                curr_stick++;
                cnt++;
            }
        }
        else if (buffer[i] == ')')
        {
            curr_stick--;
        }
        i++;
    }

    cout << cnt << '\n';
    
    return 0;
}