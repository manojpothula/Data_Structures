class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int whites = 0;
        for(int i = 0; i<k;i++)
        {
            if(blocks[i]=='W')
               whites++;
        }
        int ans = whites;
        int end = k;
        for(int start = 1 ; start <= blocks.size()-k;start++)
        {
             if(blocks[start-1]=='W')
                whites--;
            if(blocks[end]=='W')
               whites++;

            ans = min(ans,whites);
            end++;
        }
        return ans;
    }
};