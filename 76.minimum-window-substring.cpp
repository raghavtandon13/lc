#include <string>
#include <vector>
using namespace std;

// @leet start
class Solution {
  public:
    string minWindow(string s, string t) {
        // freq map of target string and current window
        vector<int> wFreq(128, 0);
        vector<int> tFreq(128, 0);

        // populate freq target map
        for (char c : t) {
            tFreq[c]++;
        }

        // init
        int sLen = s.length();
        int tLen = t.length();
        int minStart = -1;
        int minLen = sLen + 1;
        int validCount = 0;

        // start; expanding window from right
        int left = 0;
        for (int right = 0; right < sLen; right++) {
            // adding char at right of s in wFreq
            char rightChar = s[right];
            wFreq[rightChar]++;

            // if this char is needed in target t then increase valid count
            if (wFreq[rightChar] <= tFreq[rightChar]) {
                validCount++;
            }

            // if no of valid chars found == lenght of target string
            while (validCount == tLen) {
                // save min length
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    minStart = left;
                }

                // try shrinking window from left
                char leftChar = s[left];
                // if char at left is required, shrinking decreases valid count
                if (wFreq[leftChar] <= tFreq[leftChar]) {
                    validCount--;
                }

                // else we remove this char from window
                wFreq[leftChar]--;
                left++;
            }
        }

        return minStart == -1 ? "" : s.substr(minStart, minLen);
    }
};
// @leet end
