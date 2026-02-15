// #include <algorithm>
#include <vector>
using namespace std;

// @leet start
class Solution {
    // [6,5,5]
    // [2,2,1,1,1,2,2]
  public:
    int majorityElement(vector<int> &nums) {
        int e = nums[0]; // 2
        int c = 1;       // -1
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == e) {
                c++;
            } else {
                c--;
                if (c == -1) {
                    e = nums[i];
                    c = 1;
                }
            }
        }
        return e;

        // sort(nums.begin(), nums.end());
        //
        // int e = nums[0];
        // int c = 1;
        // int max_e = nums[0];
        // int max_c = 1;
        //
        // for (int i = 1; i < nums.size(); i++) {
        //     if (nums[i] == e) {
        //         c++;
        //     } else {
        //         if (c > max_c) {
        //             max_e = e;
        //             max_c = c;
        //         }
        //         e = nums[i];
        //         c = 1;
        //     }
        // }
        //
        // if (c > max_c) {
        //     max_c = c;
        //     max_e = e;
        // }
        //
        // return max_e;
    }
};
// @leet end
