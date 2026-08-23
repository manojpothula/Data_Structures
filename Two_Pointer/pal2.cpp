class Solution {
private:
    bool check(string &s, int k)
    {
        int i = 0;
        int j = s.size() - 1;

        while(i < j)
        {
            if(i == k)
            {
                i++;
                continue;
            }

            if(j == k)
            {
                j--;
                continue;
            }

            if(s[i] != s[j])
                return false;

            i++;
            j--;
        }

        return true;
    }

public:
    bool validPalindrome(string s)
    {
        int i = 0;
        int j = s.size() - 1;

        while(i < j)
        {
            if(s[i] != s[j])
            {
                return check(s, i) || check(s, j);
            }

            i++;
            j--;
        }

        return true;
    }
};