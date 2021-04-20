/*
 * 04/20/2021 10:33
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   5.8 MB
 */

class Solution {
public:
    int subtractProductAndSum(int n) {
        int add = 0;
        int sub = 1;
        
        while (n > 0)
        {
            auto tmp = n % 10;

            add += tmp;
            sub *= tmp;
            
            n /= 10;
        }
        return sub - add;
    }
};