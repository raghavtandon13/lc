#include <vector>
using namespace std;

// @leet start
class Solution {
  public:
    void reverseString(vector<char> &s) {

        // compact
        int l = 0, r = s.size() - 1;
        while (l < r) {
            swap(s[l++], s[r--]);
        }

        // gymnastics
        // int n = s.size();
        // int e = n % 2 == 0;
        // int r;
        // if (e) {
        //     r = n / 2;
        // } else {
        //     r = (n - 1) / 2;
        // }
        //
        // for (int i = 0; i < r; i++) {
        //     int t = s[i];
        //     s[i] = s[n - 1 - (1 * i)];
        //     s[n - 1 - (1 * i)] = t;
        // }
    }
};
// @leet end
