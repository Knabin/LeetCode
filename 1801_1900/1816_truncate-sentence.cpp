/*
 * 06/21/2021 16:17
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   6.5 MB
 */

class Solution {
public:
    string truncateSentence(string s, int k) {
        int index = 0;
        for (auto c : s)
        {
            if (c == ' ' && --k == 0)
            {
                return s.substr(0, index);
            }
            ++index;
        }
        return s;
    }
};