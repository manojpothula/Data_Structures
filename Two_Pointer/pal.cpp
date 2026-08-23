class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(int i = 0;i<s.size();i++)
        {
          if(isalnum(s[i]))
          {
            if(isupper(s[i]))
                ans+=s[i]+32;
            else
               ans+=s[i];
          }
        }
        int i = 0;
        int j=ans.size()-1;
        while(i<j)
        {
            if(ans[i]!=ans[j])
              return false;
            i++;
            j--;
        }
        return true;
    }
};