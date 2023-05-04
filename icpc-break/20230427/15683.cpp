#include <iostream>
#include <vector>

using namespace std;

int n, m;
int room[10][10];
int cctv_info[10][10];
vector<int> a;
vector<pair<pair<int, int>, int> > cctvs;

int check_area(int size, int num) {
    int res = 0;
    a.push_back(num);
    if (a.size() == size) {
        for (int i = 0; i < cctvs.size(); i++) {
            int cctype = cctvs[i].second;
            pair<int, int> point = cctvs[i].first;

            switch (a[i]) {
            case 0:
                
            case 1:
            case 2:
            case 3:
            }
        }
        return res;
    }
    int max = 0;
    int s;
    for (int i = 0; i < 4; i++) {
        s = check_area(size, i);
        if (s > max) max = s;
    }
    
    return res;
}

void init_room() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cctv_info[i][j] = room[i][j];
        }
    }
}

void cctv1(int y, int x, int d) {
    switch (d) {
    case 0:
        for (int i = x - 1; i >= 0; i--) {
            if (cctv_info[y][i] == 6) break;
            if (cctv_info[y][i] > 0) continue;
            cctv_info[y][i] = 7;
        }
        break;
    case 1:
        for (int i = y - 1; i >= 0; i--) {
            if (cctv_info[i][x] == 6) break;
            if (cctv_info[i][x] > 0) continue;
            cctv_info[i][x] = 7;
        }
        break;
    case 2:
        for (int i = x + 1; i < m; i++) {
            if (cctv_info[y][i] == 6) break;
            if (cctv_info[y][i] > 0) continue;
            cctv_info[y][i] = 7;
        }
        break;
    case 3:
        for (int i = y + 1; i < n; i++) {
            if (cctv_info[i][x] == 6) break;
            if (cctv_info[i][x] > 0) continue;
            cctv_info[i][x] = 7;
        }
        break;
    }
}

void cctv2(int y, int x, int d) {
    switch (d) {
    case 0:
    case 1:
        for (int i = 0; i < n; i++) {
            if (i = x) continue;
            if (cctv_info[y][i] == 6) break;
            if (cctv_info[y][i] > 0) continue;
            cctv_info[y][i] = 7;
        }
        break;
    case 2:
    case 3:
        for (int i = 0; i < m; i++) {
            if (i = y) continue;
            if (cctv_info[i][x] == 6) break;
            if (cctv_info[i][x] > 0) continue;
            cctv_info[i][x] = 7;
        }
        break;
    }
}

void cctv3(int y, int x, int d) {
    switch (d) {
    case 0:
        for (int i = x - 1; i >= 0; i--) {
            if (cctv_info[y][i] == 6) break;
            if (cctv_info[y][i] > 0) continue;
            cctv_info[y][i] = 7;
        }
        for (int i = y - 1; i >= 0; i--) {
            if (cctv_info[i][x] == 6) break;
            if (cctv_info[i][x] > 0) continue;
            cctv_info[i][x] = 7;
        }
        break;
    case 1:
        for (int i = x + 1; i < m; i++) {
            if (cctv_info[y][i] == 6) break;
            if (cctv_info[y][i] > 0) continue;
            cctv_info[y][i] = 7;
        }
        for (int i = y - 1; i >= 0; i--) {
            if (cctv_info[i][x] == 6) break;
            if (cctv_info[i][x] > 0) continue;
            cctv_info[i][x] = 7;
        }
        break;
    case 2:
        for (int i = x - 1; i >= 0; i--) {
            if (cctv_info[y][i] == 6) break;
            if (cctv_info[y][i] > 0) continue;
            cctv_info[y][i] = 7;
        }
        for (int i = y + 1; i < n; i++) {
            if (cctv_info[i][x] == 6) break;
            if (cctv_info[i][x] > 0) continue;
            cctv_info[i][x] = 7;
        }
        break;
    case 3:
        for (int i = x + 1; i < m; i++) {
            if (cctv_info[y][i] == 6) break;
            if (cctv_info[y][i] > 0) continue;
            cctv_info[y][i] = 7;
        }
        for (int i = y + 1; i < n; i++) {
            if (cctv_info[i][x] == 6) break;
            if (cctv_info[i][x] > 0) continue;
            cctv_info[i][x] = 7;
        }
        break;
    }
}

void cctv4(int y, int x, int d) {
    switch (d) {
    case 0:
        for (int i = 0; i < n; i++) {
            if (i = x) continue;
            if (cctv_info[y][i] == 6) break;
            if (cctv_info[y][i] > 0) continue;
            cctv_info[y][i] = 7;
        }
        for (int i = y - 1; i >= 0; i--) {
            if (cctv_info[i][x] == 6) break;
            if (cctv_info[i][x] > 0) continue;
            cctv_info[i][x] = 7;
        }
        break;
    case 1:
        for (int i = x + 1; i < m; i++) {
            cctv_info[y][i] = 7;
        }
        for (int i = 0; i < m; i++) {
            if (i = y) continue;
            if (cctv_info[i][x] == 6) break;
            if (cctv_info[i][x] > 0) continue;
            cctv_info[i][x] = 7;
        }
        break;
    case 2:
        for (int i = x - 1; i >= 0; i--) {
            cctv_info[y][i] = 7;
        }
        for (int i = y + 1; i < n; i++) {
            cctv_info[i][x] = 7;
        }
        break;
    case 3:
        for (int i = x + 1; i < m; i++) {
            cctv_info[y][i] = 7;
        }
        for (int i = y + 1; i < n; i++) {
            cctv_info[i][x] = 7;
        }
        break;
    }
}

void cctv5(int y, int x, int d) {
    
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> room[i][j];
            pair<int, int> point = make_pair(i, j);
            cctvs.push_back(make_pair(point, room[i][j]));
        }
    }

    init_room();
    
    for (int i = 0; i < cctvs.size(); i++) {
        int cctype = cctvs[i].second;
        pair<int, int> point = cctvs[i].first;


    }
}