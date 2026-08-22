class Solution {
  
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
         int prev1 = nums[0];
         int prev2=0;
        for(int i =1 ;i<n;i++)
        {
            int take , nontake;
            if(i-2>=0)
               take = nums[i]+prev2;
            else 
              take = nums[i]; 
           
            nontake=prev1;
            int cur=max(take,nontake);
            prev2=prev1;
            prev1=cur;
        }
     return prev1;
        

    }
};