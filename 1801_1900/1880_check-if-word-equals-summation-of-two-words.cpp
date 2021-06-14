/*
 * 06/14/2021 22:12
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   	5.9 MB
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