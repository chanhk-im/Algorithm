#include <iostream>
#include <vector>

using namespace std;

class Solution {
    int max_cnt = -1;

public:
    int maxPoints(vector<vector<int> >& points) {
        int a, b, c;
        if (points.size() == 1) return 1;
        if (points.size() == 2) return 2;
        max_cnt = 2;
        
        for (int k = 0; k < points.size(); k++) {
            for (int i = 1; i < points.size(); i++) {

                int x1 = points[k][0];
                int x2 = points[i][0];
                int y1 = points[k][1];
                int y2 = points[i][1];

                int cnt = 2;

                a = y2 - y1;
                b = y2 * (x2 - x1) - x2 * (y2 - y1);
                c = x2 - x1;

                for (int j = 2; j < points.size(); j++) {

                    int x3 = points[j][0];
                    int y3 = points[j][1];

                    if (c * y3 == a * x3 + b) {
                        cnt++;
                    }   
                }

                if (max_cnt < cnt) max_cnt = cnt;
            }
        }
        

        return max_cnt;
    }
};

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    Solution sol = Solution();

    vector<vector<int> > points;
    vector<int> point;

    point.push_back(0);
    point.push_back(0);
    points.push_back(point);
    point.clear();

    point.push_back(1);
    point.push_back(-1);
    points.push_back(point);
    point.clear();

    point.push_back(1);
    point.push_back(1);
    points.push_back(point);
    point.clear();

    cout << sol.maxPoints(points);
    
    return 0;
}