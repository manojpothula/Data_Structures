class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k =0;
        int cnt = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]!=0)
            {
                nums[k]=nums[i];
                k++;
            }
            else
               cnt++;
               
        }
        int n = nums.size()-1;
        while(cnt>0)
        {
            nums[n]=0;
            n--;
            cnt--;
        }
    }
};