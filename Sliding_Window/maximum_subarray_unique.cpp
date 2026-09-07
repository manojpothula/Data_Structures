class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
            long long sum = 0;
        long long maxi = 0;

        unordered_map<int, int> mp;

        // First window
        for(int i = 0; i < k; i++)
        {
            sum += nums[i];
            mp[nums[i]]++;
        }

        if(mp.size() == k)
            maxi = sum;

        // Sliding window
        int end = k;

        for(int start = 1; start < nums.size() - k + 1; start++)
        {
            sum -= nums[start - 1];
            mp[nums[start - 1]]--;

            if(mp[nums[start - 1]] == 0)
                mp.erase(nums[start - 1]);

            sum += nums[end];
            mp[nums[end]]++;

            end++;

            if(mp.size() == k)
                maxi = max(maxi, sum);
        }

        return maxi;
    }
};