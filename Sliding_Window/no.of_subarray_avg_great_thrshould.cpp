class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;

        for(int i = 0; i < k; i++)
        {
            sum += arr[i];
        }

        int cnt = 0;

        if(sum / k >= threshold)
            cnt++;

        int end = k;

        for(int start = 1; start < arr.size()-k+1; start++)
        {
            sum -= arr[start - 1];
           
            sum += arr[end];
            end++;

            if(sum / k >= threshold)
                cnt++;
        }

        return cnt;
    }
};