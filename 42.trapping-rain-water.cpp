#include <algorithm>
#include <vector>
using namespace std;

// @leet start
class Solution {
  public:
    int trap(vector<int> &height) {
        int n = height.size();
        int l = 0, r = n - 1;
        int leftMax = 0, rightMax = 0;
        int total = 0;

        while (l < r) {
            if (height[l] < height[r]) {
                if (height[l] >= leftMax) leftMax = height[l];
                else total += leftMax - height[l];
                l++;
            } else {
                if (height[r] >= rightMax) rightMax = height[r];
                else total += rightMax - height[r];
		r--;
            }
        }

        return total;
    }

    int trap2(vector<int> &height) {
        int n = height.size();
        int total = 0;
        for (int i = 1; i < n - 1; i++) {
            int l = i - 1, r = i + 1;
            int v = 0;

            // Find highest bar to the left
            int leftMax = 0;
            while (l >= 0) {
                leftMax = max(leftMax, height[l]);
                l--;
            }

            // Find highest bar to the right
            int rightMax = 0;
            while (r < n) {
                rightMax = max(rightMax, height[r]);
                r++;
            }

            int waterLevel = min(leftMax, rightMax);

            if (waterLevel > height[i]) {
                total += waterLevel - height[i];
            }
        }
        return total;
    }
};
// @leet end
