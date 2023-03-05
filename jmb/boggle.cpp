#include <bits/stdc++.h>

using namespace std;

char board[5][5];
const int dx[8] = { -1, -1, -1, 0, 1, 1, 1, 0 };
const int dy[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };

bool hasWord(int y, int x, const string &word) {
    if (y >= 5 || x >= 5 || y < 0 || x < 0) 
        return false;
    if (board[y][x] != word[0])
        return false;
    if (word.size() == 1)
        return true;

    for (int i = 0; i < 8; i++) {
        int nextX = x + dx[i];
        int nextY = y + dy[i];
        if (hasWord(nextY, nextX, word.substr(1))) 
            return true;
    }
    return false;
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string testWord;
    int xPos, yPos;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> board[i][j];
        }
    }
    cin >> xPos >> yPos;
    cin >> testWord;
    if (hasWord(yPos, xPos, testWord))
        cout << "true" << '\n';
    else
        cout << "false" << '\n';
    
    return 0;
}