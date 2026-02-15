#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// @leet start
class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        cout << "start\n";

        vector<vector<int>> ans = {};
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < nums.size(); j++) {

                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;

                long long t = (long long)target - nums[i] - nums[j];
                int l = j + 1, r = n - 1;

                while (r > l) {
                    if (nums[l] + nums[r] == t) {
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        r--, l++;
                        while (l < r && nums[l] == nums[l - 1])
                            l++;
                        while (l < r && nums[r] == nums[r + 1])
                            r--;
                    } else if (nums[l] + nums[r] > t) {
                        r--;
                    } else {
                        l++;
                    }
                }
            }
        }

        return ans;
    }
};
// @leet end
