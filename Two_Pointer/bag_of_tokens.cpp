class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int left = 0;
        int right = tokens.size()-1;
        int score=0;
        int maxScore=0;
        sort(tokens.begin(),tokens.end());
        while(left <= right)
        {
            if(power >= tokens[left])
            {
                score++;
                power-=tokens[left];
                left++;

                maxScore = max(maxScore,score);
            }
            else if(score > 0)
            {
               
                power+=tokens[right];
                score--;
                right--;
            }
            else
              break;
            
        }
        return maxScore;
    }
};