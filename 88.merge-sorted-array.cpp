// @leet start
class Solution {
  public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        // With Sort
        // for (int i = m; i < nums1.size(); i++) {
        //     nums1[i] = nums2[i - m];
        // }
        // sort(nums1.begin(), nums1.end());

        // Without Sort
        int i = m - 1;     // last elem of nums1
        int j = n - 1;     // last elem of nums2
        int k = m + n - 1; // last elem of extended nums1

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};
// @leet end
