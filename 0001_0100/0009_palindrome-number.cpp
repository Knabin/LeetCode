/*
 * 04/16/2021 16:19
 * Status   Accepted	
 * Runtime  4 ms
 * Memory   5.6 MB
 */

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        
        int a = 0;
        int b = x;

        while (b != 0)
        {
            if (a > INT_MAX / 10 || (a == INT_MAX / 10 && b % 10 > 7))
            {
                return false;
            }
            a = a * 10 + b % 10;
            b /= 10;
        }
        
        if (a == x) return true;
        return false;
    }
};