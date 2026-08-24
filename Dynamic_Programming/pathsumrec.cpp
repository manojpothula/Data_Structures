class Solution {
private:
    int pathsum(int i, int j, vector<vector<int>>& grid)
    {
        if(i == 0 && j == 0)
            return grid[0][0];

        if(i < 0 || j < 0)
            return 1e9;

        int up = pathsum(i - 1, j, grid);
        int left = pathsum(i, j - 1, grid);

        return grid[i][j] + min(up, left);
    }

public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        return pathsum(m - 1, n - 1, grid);
    }
};