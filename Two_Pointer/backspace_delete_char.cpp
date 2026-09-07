class Solution {
public:
    bool backspaceCompare(string s, string t) {

        for(int i = 0; i < s.size(); ) {
            if(s[i] == '#') {
                s.erase(i, 1);   // remove #

                if(i > 0) {
                    s.erase(i - 1, 1); // remove previous character
                    i--;
                }
            }
            else {
                i++;
            }
        }

        for(int i = 0; i < t.size(); ) {
            if(t[i] == '#') {
                t.erase(i, 1);

                if(i > 0) {
                    t.erase(i - 1, 1);
                    i--;
                }
            }
            else {
                i++;
            }
        }

        return s == t;
    }
};