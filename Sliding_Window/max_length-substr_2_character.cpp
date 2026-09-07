class Solution {
public:
    int maximumLengthSubstring(string s) {
       map<char,int>mpp;
       int ans = 0;
       int left = 0;
       int right = 0;
       int n = s.size();
       while(right  < n)
       {
            mpp[s[right]-'a']++;
            while(mpp[s[right]-'a']  > 2)
            {
                mpp[s[left]-'a']--;
                left++;
            }

        ans = max(ans,right-left+1);
        right++;
       }
       return ans;
    }
};