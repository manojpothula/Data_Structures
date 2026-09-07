class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans1;
        vector<int>ans2;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                ans1.push_back(nums[i]);
            }
        }
         for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==pivot)
            {
                ans1.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>pivot)
            {
                ans2.push_back(nums[i]);
            }
        }
        for(int i=0;i<ans2.size();i++)
        {
            ans1.push_back(ans2[i]);
        }
        return ans1;
    }
};