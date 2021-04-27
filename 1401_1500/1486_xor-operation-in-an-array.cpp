/*
 * 04/27/2021 18:53
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   5.9 MB
 */

class Solution {
public:
    int xorOperation(int n, int start) {
        int result = start;
        for (int i = 1; i < n; ++i)
        {
            result ^= (start + i * 2);
        }
        return result;
    }
};