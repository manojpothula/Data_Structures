class Solution {
  public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        // code here
          int n  = mat.size();
             int m = mat[0].size();


             //dp table
             vector<vector<int>>dp(n,vector<int>(m,0));

             // Base case
             for(int i = 0 ;i<n;i++)
             {
                 for(int j = 0;j<m;j++)
                 {
                     if(i==0)
                     {
                         dp[i][j]=mat[i][j];
                     }
                 }
             }

             //explore
             for(int i = 1 ; i < n ; i++)
             {
                 for(int j = 0 ;j < m ; j++)
                 {
                     int down = dp[i-1][j];
                     int left = 1e9;
                     int right = 1e9;
                     if(j>0)
                       left = dp[i-1][j-1];
                     if(j<m-1)
                       right = dp[i-1][j+1];

                     dp[i][j]=mat[i][j]+min(down,min(left,right));
                 }
             }

          //maximum from last row 
          int mini = INT_MAX;

          for(int j = 0; j < m; j++)
          {
              mini = min(mini, dp[n-1][j]);
          }

          return mini;

    }
};
