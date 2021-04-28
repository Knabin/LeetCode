/*
 * 04/28/2021 10:21
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   6.2 MB
 */

class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0;
        int max = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '(') cnt++;
            else if (s[i] == ')') cnt--;
            
            if (cnt > max) max = cnt;
        }
        
        return max;
    }
};