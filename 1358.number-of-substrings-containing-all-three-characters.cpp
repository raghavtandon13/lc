#include <string>
#include <vector>
using namespace std;

// @leet start
class Solution {
  public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int ans = 0;
        for (int i = 0; i <= n - 3; i++) {
            vector<int> window(3, 0);
            for (char c : s) {
                window[c - 'a']++;
            }

            if (window[0] >= 1 && window[1] >= 1 && window[2] >= 1) ans++;
            while (window[0] >= 1 && window[1] >= 1 && window[2] >= 1) {
                //
            }
        }

        return ans;
    }
};
// @leet end
