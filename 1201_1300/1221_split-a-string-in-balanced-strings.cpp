/*
 * 04/27/2021 18:46
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   6.1 MB
 */

class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt = 0;
        int tmp = s[0] == 'R' ? 1 : -1;
        
        for (int i = 1; i < s.length(); ++i)
        {
            if (s[i] == 'R') ++tmp;
            else --tmp;
            
            if (tmp == 0) ++cnt;
        }
        
        return cnt;
    }
};