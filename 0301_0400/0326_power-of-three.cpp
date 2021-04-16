/*
 * 04/16/2021 17:27
 * Status   Accepted	
 * Runtime  8 ms
 * Memory   6 MB
 */

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 0) return false;
        
        double res = log10(n) / log10(3);
        return floor(res) == res;
    }
};