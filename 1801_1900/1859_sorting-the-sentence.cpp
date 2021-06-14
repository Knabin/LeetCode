/*
 * 06/15/2021 00:09
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   6.1 MB
 */

class Solution {
public:
    string sortSentence(string s) {
        map<int, string> mstr;
        string tmp = "";
        
        for (auto c : s)
        {
            if (c >= '0' && c <= '9')
            {
                mstr[c - '0'] = tmp;
                tmp = "";
            }
            else if (c != ' ')
            {
               tmp += c; 
            }
        }
        
        string res = "";
        auto a = mstr.begin();
        while (true)
        {
            res += a->second;
            if (++a != mstr.end())
            {
                res += ' ';
            }
            else
            {
                break;
            }
        }

        return res;
    }
};