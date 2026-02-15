#include <unordered_set>
#include <vector>
using namespace std;

// @leet start

class Solution {
  public:
    bool containsDuplicate(vector<int> &nums) {
        unordered_set<int> set;
        for (int i = 0; i < nums.size(); i++) {
            if (set.count(nums[i]))
                return true;
            set.insert(nums[i]);
        };
        return false;
    }
};
// @leet end
