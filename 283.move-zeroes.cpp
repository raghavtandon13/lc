#include <iostream>
#include <vector>
using namespace std;

// intuition: first zeros avalable for non zero values to be moved to

// @leet start
class Solution {
  public:
    void moveZeroes(vector<int> &nums) {
        int write = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[write++] = nums[i];
            }
        }

        while (write < nums.size()) {
            nums[write++] = 0;
        }
    }
};
// @leet end
