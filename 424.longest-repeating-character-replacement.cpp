#include <string>
using namespace std;

// @leet start
class Solution {
  public:
    int characterReplacement(string s, int k) {
        //
        // Input: s = "AABABBA", k = 1
        // Output: 4
        //

        int left = 0;
        char leftChar = s[left];
        int moves = k;
        int maxLen = 0;

        for (int right = 0; right < s.length(); right++) {
            char rightChar = s[right];
            if (rightChar != leftChar) {
                if (moves) {
                    s[right] = leftChar;
                    moves--;
                } else {
                    maxLen = max(maxLen, right - left);
                }
            }
        }

        return 0;
    }
};
// @leet end
