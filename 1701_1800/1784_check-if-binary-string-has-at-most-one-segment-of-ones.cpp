/*
 * 04/18/2021 20:29
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   6 MB
 */

class Solution {
public:
    bool checkOnesSegment(string s) {
        int lastIndex = 0;
        for (int i = s.length() - 1; i >= 0; --i)
        {
            if (s[i] == '1')
            {
                lastIndex = i;
                break;
            }
        }
        
        for (int i = 0; i <= lastIndex; ++i)
        {
            if (s[i] == '0')
            {
                return false;
            }
        }
        
        return true;
    }
};