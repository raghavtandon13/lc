#include <vector>
using namespace std;

// @leet start
class Solution {
  public:
    int maxProfit(vector<int> &prices) {

        int maxProfit = 0;
	vector<int> changes(prices.size());

        for (int i = 1; i < prices.size(); i++) {
            changes[i] = prices[i] - prices[i - 1];
        }

        for (int i = 0; i < changes.size(); i++) {
            maxProfit += max(0, changes[i]);
        }

        // compact version
        // for (int i = 1; i < prices.size(); i++) {
        //     maxProfit += max(0, prices[i] - prices[i - 1]);
        // }

        return maxProfit;
    }
};
// @leet end
