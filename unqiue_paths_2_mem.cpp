class Solution {
private:
    int unique(int i, int j, int m, int n, vector<vector<int>>& grid,vector<vector<int>>& dp) {

        if(grid[i][j] == 1)
            return 0;

        if(i == m-1 && j == n-1)
            return 1;
        
        if(dp[i][j]!=-1)
           return dp[i][j];

        int down = 0;
        int right = 0;

        if(j < n-1)
            right = unique(i, j+1, m, n, grid,dp);

        if(i < m-1)
            down = unique(i+1, j, m, n, grid,dp);

        return dp[i][j]=right + down;
    }

public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return unique(0, 0, m, n, obstacleGrid,dp);
    }
};