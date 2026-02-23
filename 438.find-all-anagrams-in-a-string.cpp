#include <string>
#include <vector>
using namespace std;
// @leet start
class Solution {
  public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if (p.length() > s.length()) return ans;

        vector<int> need(26, 0);
        vector<int> window(26, 0);
        for (char c : p) {
            need[c - 'a']++;
        }

        // first window from 0 to len(p) of s
        for (int i = 0; i < p.length(); i++) {
            window[s[i] - 'a']++;
        }

        if (window == need) ans.push_back(0);

        // sliding the window
        for (int left = 1; left < s.length() - p.length() + 1; left++) {
            window[s[left - 1] - 'a']--;
            window[s[left + p.length() - 1] - 'a']++;
            if (window == need) ans.push_back(left);
        }

        return ans;
    }
};
// @leet end
