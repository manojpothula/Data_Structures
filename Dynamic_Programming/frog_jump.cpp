class Solution {
public:
    int frogJump(vector<int>& heights) {
        int n = heights.size();

       int prev1=0;
       int prev2=0;
      int cur;
        for (int i = 1; i < n; i++) {
            int left =prev1 + abs(heights[i] - heights[i - 1]);

            int right = INT_MAX;

            if (i > 1) {
                right = prev2+ abs(heights[i] - heights[i - 2]);
            }

            cur  = min(left, right);
            prev2=prev1;
            prev1=cur;
        }

        return prev1;
    }
};