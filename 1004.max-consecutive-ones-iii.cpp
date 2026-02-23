#include <algorithm>
#include <vector>
using namespace std;

// @leet start
class Solution {
  public:
    int longestOnes(vector<int> &nums, int k) {
        int ans = 0, left = 0, zCount = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) zCount++;
            while (zCount > k) {
                if (nums[left] == 0) zCount--;
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};
// @leet end
