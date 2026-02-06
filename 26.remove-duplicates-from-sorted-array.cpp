#include <vector>
using namespace std;

// @leet start
class Solution {
  public:
    int removeDuplicates(vector<int> &nums) {
        if (nums.empty()) {
            return 0;
        }

        int c = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[c]) {
                nums[c + 1] = nums[i];
                c++;
            }
        }
        return c + 1;
    }
};
// @leet end
