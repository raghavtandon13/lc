#include <vector>
using namespace std;

// @leet start
class Solution {
  public:
    vector<int> twoSum(vector<int> &numbers, int target) {

        // simple
        // for (int i = 0; i < numbers.size(); i++) {
        //     for (int j = i + 1; j < numbers.size(); j++) {
        //         if (numbers[i] + numbers[j] == target) {
        //             return {i + 1, j + 1};
        //         } else if (numbers[i] + numbers[j] > target) {
        //             // this could help in certain cases
        //             // but not helpful enough
        //             break;
        //         }
        //     }
        // }

        // 2 Pointers

        int l = 0;
        int r = numbers.size() - 1;

        while (l < r) {
            int sum = numbers[l] + numbers[r];
            if (sum < target)
                l++;
            else if (sum > target)
                r--;
            else
                return {l + 1, r + 1};
        }

        return {0, 0};
    }
};
// @leet end
