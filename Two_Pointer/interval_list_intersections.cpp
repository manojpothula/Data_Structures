class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
       vector<vector<int>>ans;
      
      int i = 0;
      int j = 0;
      while(i < firstList.size() && j < secondList.size())
      {
        int a1 = firstList[i][0];
        int b1 = firstList[i][1];
        int a2 = secondList[j][0];
        int b2 = secondList[j][1];

        int start = max(a1,a2);
        int end = min(b1,b2);

        if(start <= end)
        {
            ans.push_back({start,end});
        }

        if(b1<b2)
            i++;
        else
          j++;
      }

       return ans;
    }
};