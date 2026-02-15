#include <algorithm>
#include <vector>
using namespace std;

// @leet start
class Solution {
  public:
    int longestMountain(vector<int> &arr) {

        int i = 1;
        int n = arr.size();
        int maxLen = 0;

        // treating each elem as peak
        while (i < n - 1) {

            if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i]) {
                // curr elem is a peak

                int l = i - 1;
                int r = i + 1;

                // expanding l and r
                while (l > 0 && arr[l - 1] < arr[l]) l--;
                while (r < n - 1 && arr[r + 1] < arr[r]) r++;

                maxLen = max(maxLen, r - l + 1);

                // setting right lowest point of curr mount
                // as start of next mount
                i = r;

            } else i++; // curr elem not a peak
        }
        return maxLen;
    }
};
// @leet end
