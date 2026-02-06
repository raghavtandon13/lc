// @leet start
class Solution {
  public:
    int minEatingSpeed(vector<int> &piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canEat(mid, h, piles)) {
                ans = mid;      // mid works
                high = mid - 1; // try smaller
            } else {
                low = mid + 1; // need faster speed
            }
        }
        return ans;
    }

    bool canEat(int speed, int h, vector<int> &piles) {
        long long hours = 0;
        for (int p : piles) {
            hours += (p + speed - 1) / speed;
            if (hours > h)
                return false; // early exit
        }
        return true;
    }
};
// @leet end
