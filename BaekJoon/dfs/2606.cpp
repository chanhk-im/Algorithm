#include <bits/stdc++.h>

using namespace std;

bool branch[105][105];
bool visited[105] = {0, };
int com_count, branch_count;
int virus_count = 0;

void dfs(int n) {
    visited[n] = true;
    for (int i = 1; i < com_count + 1; i++) {
        if (i == n || !(branch[n][i]) || visited[i]) continue;
        virus_count++;
        dfs(i);
    }
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    fill(&branch[0][0], &branch[104][105], 0);

    cin >> com_count;
    cin >> branch_count;

    for (int i = 0; i < branch_count; i++) {
        int com1, com2;
        cin >> com1 >> com2;
        branch[com1][com2] = true;
        branch[com2][com1] = true;
    }

    dfs(1);

    cout << virus_count << '\n';
    
    return 0;
}