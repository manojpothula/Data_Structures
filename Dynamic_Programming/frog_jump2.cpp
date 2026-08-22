class Solution {
private:
    int f(int ind, int k, vector<int>& heights) {
        if (ind == 0)
            return 0;

        int minsteps = INT_MAX;

        for (int j = 1; j <= k; j++) {
            if (ind - j >= 0) {
                int jumps = f(ind - j, k, heights)
                          + abs(heights[ind] - heights[ind - j]);

                minsteps = min(minsteps, jumps);
            }
        }

        return minsteps;
    }

public:
    int frogJump(vector<int>& heights, int k) {
        int n = heights.size();

        return f(n - 1, k, heights);
    }
};