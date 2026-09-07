class Solution {
  private:
    int f(int i,int j,vector<vector<int>>& mat,vector<vector<int>>& dp)
    {
        int n = mat.size();
        int m = mat[0].size();
        
        //Out of bound case
        if(j < 0 || j>=m)
            return -1e9;
            
            
        //Base Case
        if(i==0)
           return mat[i][j];
        
        if(dp[i][j]!=-1)
           return dp[i][j];
        
        //exploring
        int down = f(i-1,j,mat,dp);
        int left = f(i-1,j-1,mat,dp);
        int right = f(i-1,j+1,mat,dp);
        
        //return 
        return dp[i][j]=mat[i][j] + max(down,max(left,right));
    }
  public:
    int maximumPath(vector<vector<int>>& mat) {
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
                int left = -1e9;
                int right = -1e9;
                if(j>0)
                  left = dp[i-1][j-1];
                if(j<m-1)
                  right = dp[i-1][j+1];
                
                dp[i][j]=mat[i][j]+max(down,max(left,right));
            }
        }
     
     //maximum from last row 
     int maxi = INT_MIN;

     for(int j = 0; j < m; j++)
     {
         maxi = max(maxi, dp[n-1][j]);
     }

     return maxi;
        
    }
};