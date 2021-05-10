/*
 * 05/10/2021 14:23
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   5.8 MB
 */

class Solution {
public:
    int numberOfMatches(int n) {
        int result = 0;
        while (n > 1)
        {
            int tmp = n / 2;
            n -= tmp;
            result += tmp;
        }
        return result;
    }
};