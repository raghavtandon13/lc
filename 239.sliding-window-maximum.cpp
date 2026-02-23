#include <algorithm>
#include <deque>
#include <vector>
using namespace std;

// @leet start
class Solution {
  public:
    // Brute Force
    vector<int> maxSlidingWindowBruteForce(vector<int> &nums, int k) {
        vector<int> ans;
        for (int i = 0; i < nums.size() - k + 1; i++) {
            auto maxn = nums[i];
            for (int j = i + 1; j < i + k; j++) {
                maxn = max(maxn, nums[j]);
            }
            ans.push_back(maxn);
        }
        return ans;
    }

    vector<int> maxSlidingWindow(vector<int> &nums, int k) {

        // ONLY STORE INDICES NOT VALUES
        deque<int> window;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {

            // when i reaches above window length remove elems from left (front)
            if (!window.empty() && window.front() == i - k) window.pop_front();

            // if a new elem is less than ith elem it cant be max so pop
            // until a bigger elem comes along
            while (!window.empty() && nums[window.back()] < nums[i])
                window.pop_back();

            // add elems
            window.push_back(i);

            // if window length >= k, add first elem of win to res
            if (i >= k - 1) result.push_back(nums[window.front()]);
        }

        return result;
    }
};
// @leet end
