#include <algorithm>
#include <vector>
using namespace std;

// @leet start
class Solution {
  public:
    // BRUTE FORCE
    int maxArea_bf(vector<int> &height) {
        int biggest = 0;
        for (int i = 0; i < height.size(); i++) {
            for (int j = i + 1; j < height.size(); j++) {

                int w = j - i;
                int h = height[i] > height[j] ? height[j] : height[i];
                int area = h * w;

                if (area > biggest) {
                    biggest = area;
                }
            }
        }

        return biggest;
    }

    // 2 POINTER
    int maxArea(vector<int> &height) {
        int l = 0, r = height.size() - 1;
        int best = 0;

        while (l < r) {
            int area = min(height[l], height[r]) * (r - l);
            best = max(best, area);

            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        return best;
    }
};
// @leet end
