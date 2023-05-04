#include <iostream>
#include <queue>

using namespace std;

int r, c;
char maze[1005][1005];
int fire_time[1005][1005];
bool can_exit;
int res_time;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> r >> c;

    for (int i = 0; i < r; i++) {
        cin >> maze[i];
    }

    queue<pair<int, int> > qj;
    queue<int> qt;
    queue<pair<int, int> > qf;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (maze[i][j] == '#') {
                fire_time[i][j] = -1;
            }
            else {
                fire_time[i][j] = -2;
            }
            if (maze[i][j] == 'J') {
                pair<int, int> p;
                p.first = i;
                p.second = j;
                qj.push(p);
                qt.push(0);
            }
            else if (maze[i][j] == 'F') {
                pair<int, int> p;
                p.first = i;
                p.second = j;
                qf.push(p);
                fire_time[i][j] = 0;
            }
        }
    }

    can_exit = false;
    while (!qf.empty()) {
        int x, y;
        if (!qf.empty()) {
            pair<int, int> pf = qf.front();
            y = pf.first;
            x = pf.second;
            qf.pop();
            int ft = fire_time[y][x];

            if (y > 0 && fire_time[y-1][x] == -2) {
                pair<int, int> nf(y-1, x);
                qf.push(nf);
                fire_time[y-1][x] = ft + 1;
            }
            if (y < r - 1 && fire_time[y+1][x] == -2) {
                pair<int, int> nf(y+1, x);
                qf.push(nf);
                fire_time[y+1][x] = ft + 1;
            }
            if (x > 0 && fire_time[y][x-1] == -2) {
                pair<int, int> nf(y, x-1);
                qf.push(nf);
                fire_time[y][x-1] = ft + 1;
            }
            if (x < c - 1 && fire_time[y][x+1] == -2) {
                pair<int, int> nf(y, x+1);
                qf.push(nf);
                fire_time[y][x+1] = ft + 1;
            }
        }
    }
    while (!qj.empty()) {
        int x, y; 
        pair<int, int> pj = qj.front();
        int timej = qt.front();
        qj.pop();
        qt.pop();
        y = pj.first;
        x = pj.second;
        if (y == 0 || y == r - 1 || x == 0 || x == c - 1) {
            res_time = timej + 1;
            can_exit = true;
            break;
        }
        if (fire_time[y-1][x] == -2 || fire_time[y-1][x] > timej + 1) {
            pair<int, int> nj(y-1, x);
            qj.push(nj);
            qt.push(timej + 1);
            maze[y-1][x] = 'J';
            fire_time[y-1][x] = -1;
        }
        if (fire_time[y+1][x] == -2 || fire_time[y+1][x] > timej + 1) {
            pair<int, int> nj(y+1, x);
            qj.push(nj);
            qt.push(timej + 1);
            maze[y+1][x] = 'J';
            fire_time[y+1][x] = -1;
        }
        if (fire_time[y][x-1] == -2 || fire_time[y][x-1] > timej + 1) {
            pair<int, int> nj(y, x-1);
            qj.push(nj);
            qt.push(timej + 1);
            maze[y][x-1] = 'J';
            fire_time[y][x-1] = -1;
        }
        if (fire_time[y][x+1] == -2 || fire_time[y][x+1] > timej + 1) {
            pair<int, int> nj(y, x+1);
            qj.push(nj);
            qt.push(timej + 1);
            maze[y][x+1] = 'J';
            fire_time[y][x+1] = -1;
        }
    }

    if (can_exit) {
        cout << res_time << '\n';
    } else {
        cout << "IMPOSSIBLE\n";
    }

    return 0;
}