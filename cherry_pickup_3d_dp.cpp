class Solution {
private:
    int f(int i,int j1,int j2,vector<vector<int>>& a,vector<vector<vector<int>>>&dp)
    {
       int m = a[0].size();
       int n = a.size();
      
       if(j1 < 0 || j1 >= m || j2 < 0 || j2 >= m)
            return -1e8;
        if(dp[i][j1][j2] != -1)
           return dp[i][j1][j2];
    if(i==n-1)
    {
        if(j1==j2)
             return a[i][j1];
        else
            return a[i][j1] + a[i][j2];
    }



    //traverse in 9 possible path
    //for one alice path there willl be 3 bob paths both can move from -1 , 0 , 1
    int maxi  = -1e8;
    for(int dj1=-1;dj1<=1;dj1++)
    {
        for(int dj2=-1;dj2<=1;dj2++)
        {
            if(j1==j2)
                maxi = max(maxi,a[i][j1] + f(i+1,j1+dj1,j2+dj2,a,dp));
            else
                maxi = max(maxi,a[i][j1] + a[i][j2] + f(i+1,j1+dj1,j2+dj2,a,dp));
        }
    }
    return dp[i][j1][j2]=maxi;
    

    }
public:
    int maxChocolates(vector<vector<int>>& g) {
        // Your code goes here
        int n = g.size();
        int m = g[0].size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        int ans = f(0,0,m-1,g,dp);
        return ans;
    }
};