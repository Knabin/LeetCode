/*
 * 05/02/2021 19:48
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   6.1 MB
 */

class Solution {
public:
    string replaceDigits(string s) {
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] <= '9')
            {
                s[i] = s[i-1] + s[i] - '0';
            }
        }
        return s;
    }
};