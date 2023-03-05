#include <iostream>
#include <vector>
#include <queue>



using namespace std;
class Solution {
public:
    vector<int> min_jump;
public:
    int jump(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            min_jump.push_back(i);
        }

        
    }
};