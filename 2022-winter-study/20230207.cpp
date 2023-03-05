#include <iostream>
#include <vector>

using namespace std;

int n;

int main() {
    int cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        vector<vector<int>> rect;
        vector<int> start_point;
        vector<int> end_point;

        int x, y;
        cin >> x >> y;

        start_point.push_back(x);
        start_point.push_back(y);

        cin >> x >> y;

        end_point.push_back(x);
        end_point.push_back(y);

        vector<int> point;

        cin >> x >> y;

        point.push_back(x);
        point.push_back(y);

        rect.push_back(point);

        cin >> x >> y;

        point.clear();
        point.push_back(x);
        point.push_back(y);

        rect.push_back(point);

        bool result = false;

        if (start_point[0] == end_point[0]) {
            if (rect[0][0] <= rect[1][0]) {
                if (rect[0][0] <= start_point[0] && start_point[0] <= rect[1][0]) {
                    
                }
            }
        } else if (start_point[1] == end_point[1]) {

        } else {

        }
    }
    return 0;
}