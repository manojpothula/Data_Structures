class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j =height.size()-1;
        int ans = INT_MIN;
        while(i < j)
        {
            int water = abs(i-j) * min(height[i],height[j]);
            ans = max(ans,water);

            if(height[i] > height[j])
               j--;
            else
             i++;
        }
        return ans;
    }
}; 