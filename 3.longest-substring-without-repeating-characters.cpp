#include <string>
#include <vector>
using namespace std;

// @leet start
class Solution {
  public:
    int lengthOfLongestSubstring(string s) {
        vector<int> f(256, 0);
        int l = 0;
        int m = 0;

        for (int r = 0; r < s.size(); r++) {

            f[s[r]]++;

            while (f[s[r]] > 1) {
                f[s[l]]--;
                l++;
            }

            m = max(m, r - l + 1);
        }

        return m;
    }
};
// @leet end
