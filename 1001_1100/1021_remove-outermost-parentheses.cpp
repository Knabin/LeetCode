/*
 * 06/21/2021 16:42
 * Status   Accepted	
 * Runtime  4 ms
 * Memory   6.8 MB
 */

class Solution {
public:
    string removeOuterParentheses(string s) {
        int check = 0;
        string res = "";
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == ')')
            {
                if (--check == 0) continue;
            }
            else
            {
                if (check++ == 0) continue;
            }
            res += s[i];
        }
        return res;
    }
};