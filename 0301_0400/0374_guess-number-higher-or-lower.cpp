/*
 * 04/19/2021 17:43
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   5.9 MB
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 1, right = n;
        
        while (left <= right)
        {
            int center = (right - left) / 2 + left;
            int res = guess(center);
            if (res == 0)
            {
                return center;
            }
            else if (res > 0)
            {
                left = center + 1;
            }
            else
            {
                right = center - 1;
            }
        }
        return 0;
    }
};