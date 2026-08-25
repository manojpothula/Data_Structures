class Solution {
private:
   int f(int i,int j,int n,vector<vector<int>>& arr)
   {
    if(i==n-1)
       return arr[i][j];
    int down = arr[i][j] + f(i+1,j,n,arr);
    int diag = arr[i][j] + f(i+1,j+1,n,arr);

    return min(down,diag);
   }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        return f(0,0,n,triangle);
    }
};