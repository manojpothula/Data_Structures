class Solution {
public:
    bool isSubsetSum(vector<int> arr, int target) {
        int n = arr.size();

        vector<vector<bool>> dp(n, vector<bool>(target + 1, false));

        // Target 0 can always be achieved
        for (int i = 0; i < n; i++) {
            dp[i][0] = true;
        }

        // First element
        if (arr[0] <= target)
            dp[0][arr[0]] = true;

        // Fill DP table
        for (int ind = 1; ind < n; ind++) {
            for (int tar = 1; tar <= target; tar++) {

                bool nottake = dp[ind - 1][tar];

                bool take = false;
                if (tar >= arr[ind])
                    take = dp[ind - 1][tar - arr[ind]];

                dp[ind][tar] = take || nottake;
            }
        }

        return dp[n - 1][target];
    }
};