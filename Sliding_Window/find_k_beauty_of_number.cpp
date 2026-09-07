class Solution {
public:
    int divisorSubstrings(int num, int k) {
        long long temp = pow(10, k);
        int digits = (int)log10(num)+1;
        int original = num;
        int cnt= 0;
        for(int times = digits-k+1 ; times>0 ; times--)
        {
           int div = num % temp;
           if(div!=0 && original%div==0)
              cnt++;
           num = num/10;
             
        }
        return cnt;
    }
};