/*
 * 05/10/2021 14:28
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   6 MB
 */

class Solution {
public:
    string toLowerCase(string str) {
        for (int i = 0; i < str.length(); ++i)
        {
            if (str[i] >= 'A' && str[i] <= 'Z') str[i] += ('a') - ('A');
        }
        return str;
    }
};