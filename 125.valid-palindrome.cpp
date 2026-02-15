#include <cctype>
#include <string>
using namespace std;

// @leet start
class Solution {

    // formatting skill issue
    // too dumb to make it pretty

  public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;

        while (r >= l) {
            if (!isalnum(s[l])) {
                l++;
            } else if (!isalnum(s[r])) {
                r--;
            } else {
                if (tolower(s[l]) != tolower(s[r])) {
                    return false;
                }
                l++;
                r--;
            }
        }

        return true;
    }
};
// @leet end
