class Solution {
    private:
     int robbery(vector<int>& nums) {
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
public:
     int rob(vector<int>& nums) {
        if(nums.size()==1)
          return nums[0];
        vector<int>temp1;
        vector<int>temp2;
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0)
               temp1.push_back(nums[i]);
            if(i!=nums.size()-1)
               temp2.push_back(nums[i]);
        }
        return max(robbery(temp1),robbery(temp2));
    }
};