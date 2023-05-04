#include <iostream>
#include <stack>

using namespace std;

int n;
int arr_size = 0;
int curr = 0;
int q_arr[20][20];

int pos_x(int pos) {
    return pos % 8;
}

int pos_y(int pos) {
    return pos / 8;
}

bool check_confilct(int pos1, int pos2) {
    int pos1_x = pos_x(pos1);
    int pos1_y = pos_y(pos1);
    int pos2_x = pos_x(pos2);
    int pos2_y = pos_y(pos2);

    if (pos1_x == pos2_x || pos1_y == pos2_y || pos1_y - pos2_y == pos1_x - pos2_x || pos1_y - pos2_y == pos2_x - pos1_x) {
        return false;
    }
    return true;
}

bool check_conflict_all() {
    
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;

    while (true) {
        
    }
    
    return 0;
}