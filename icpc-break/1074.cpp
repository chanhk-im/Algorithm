#include <iostream>
#include <cmath>

using namespace std;
int curr = 0;
int n, c, r;
int crow = 0, ccol = 0;
int res;


int z_traversal(int size, int row, int col) {
    if (size == 1) return 0;
    int half = size / 2;

    if (row < half && col < half) return z_traversal(half, row, col);
    if (row < half && col >= half) return half*half + z_traversal(half, row, col - half);
    if (row >= half && col < half) return 2*half*half + z_traversal(half, row - half, col);
    return 3*half*half + z_traversal(half, row - half, col - half);
}

int main() {
    cin >> n >> r >> c;
    
    cout << z_traversal(pow(2, n), r, c) << '\n';
    return 0;
}