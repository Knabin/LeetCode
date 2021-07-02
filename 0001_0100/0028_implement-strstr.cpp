/*
 * 07/02/2021 17:16
 * Status   Accepted	
 * Runtime  4 ms    (faster than 77.34%)
 * Memory   6.8 MB  (less than 73.95%)
 */

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;

        int index = 0;        
        
        for (int i = 0, j = 0; index + i < haystack.length();)
        {
            if (haystack[index + i] == needle[j])
            {
                ++i;
                ++j;
                
                if (j == needle.length()) return index;
            }
            else
            {
                ++index;
                i = 0;
                j = 0;
            }
        }
        
        return -1;
    }
};