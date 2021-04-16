#define INT_MAX 2147483647
#define INT_MIN -2147483648

/*
 * 04/16/2021 15:37
 * Status   Accepted	
 * Runtime  4 ms
 * Memory   5.9 MB
 */

class Solution {
public:
    int reverse(int x) {
        if (INT_MIN > x || INT_MAX < x)
        {
            return 0;
        }

        int a = x;
        int result = 0;

        while (a != 0)
        {
            if (result > INT_MAX / 10 || result < INT_MIN / 10)
            {
                return 0;
            }

            result = (result * 10) + (a % 10);
            a = a / 10;
        }

        return result;
    }
};


/*
 * 04/16/2021 15:45
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   5.9 MB
 */


class Solution {
public:
    int reverse(int x) {
        int result = 0;

        while (x != 0)
        {
            int tmp = x % 10;

            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && tmp > 7))
            {
                return 0;
            }
            else if (result < INT_MIN / 10 || (result == INT_MIN / 10 && tmp < -8))
            {
                return 0;
            }

            result = (result * 10) + tmp;
            x /= 10;
        }

        return result;
    }
};