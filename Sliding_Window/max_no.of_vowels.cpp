class Solution {
private:
   bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || 
           ch == 'o' || ch == 'u';
}
public:
    int maxVowels(string s, int k) {
        int maxi = INT_MIN;
        int vowel = 0;
        for(int i = 0;i <k;i++)
        {
            if(isVowel(s[i]))
               vowel++;
        }
        maxi = max(maxi,vowel);
        int end  = k;
        for(int start = 1;start<s.size()-k+1;start++)
        {
            if(isVowel(s[start-1]))
                 vowel--;
             if(isVowel(s[end++]))
                vowel++;
            maxi = max(maxi,vowel);
                
        }
        return maxi;

    }
};