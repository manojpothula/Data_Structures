class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int leftmax=0;
        int rightmax=0;
        int ans = 0;
        while(left<=right)
        {
            if(leftmax<=rightmax)
            {
                       leftmax = max(leftmax,height[left]);
                       ans+=leftmax-height[left];

                       left++;
            }
            else
            {
                      rightmax = max(rightmax,height[right]);
                      ans+=rightmax-height[right];
                      right--;
            }
        }
        return ans;
    }
};