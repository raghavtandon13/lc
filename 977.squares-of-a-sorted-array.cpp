// #include <algorithm>
#include <vector>
using namespace std;

// @leet start
class Solution {
  public:
    vector<int> sortedSquares(vector<int> &nums) {

        // Brute Force
        // for (int i = 0; i < nums.size(); i++) {
        //     nums[i] = nums[i] * nums[i];
        // }
        //
        // sort(nums.begin(), nums.end());
        // return nums;

        // 2 Pointers
        int n = nums.size();
        vector<int> res(n);

        int l = 0, r = n - 1;
        int pos = n - 1;

        while (l <= r) {
            int lsqr = nums[l] * nums[l];
            int rsqr = nums[r] * nums[r];

            if (lsqr > rsqr) {
                res[pos--] = lsqr;
                l++;
            } else {
                res[pos--] = rsqr;
                r--;
            }
        }

        return res;
    }
};
// @leet end
