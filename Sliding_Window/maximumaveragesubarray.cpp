class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double sum = 0;
        for(int i = 0 ; i<k ; i++)
        {
            sum+=nums[i];
        }
        int n = nums.size();
       double maxi = sum;
      
        int j = k;
        for(int i =1 ; i <= n-k ; i++)
        {
          sum+=nums[j++];
          sum-=nums[i-1];
          maxi = max(maxi,sum);

        }
        return maxi/k;
    }
};