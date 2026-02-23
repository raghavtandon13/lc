#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

// @leet start
// find the longest window with only 2 unique chars
class Solution {
  public:
    int totalFruit(vector<int> &fruits) {
        unordered_map<int, int> count;
        int l = 0, ans = 0;

        for (int r = 0; r < fruits.size(); r++) {
            count[fruits[r]]++;

            while (count.size() > 2) {
                count[fruits[l]]--;
                if (count[fruits[l]] == 0) count.erase(fruits[l]);
                l++;
            }

            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};
// @leet end
