/*
 * 04/16/2021 16:59
 * Status   Accepted	
 * Runtime  12 ms
 * Memory   7.9 MB
 */

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> un = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
                                       {'C', 100}, {'D', 500}, {'M', 1000}};
        int result = un[s.back()];
        
        for (int i = s.length() - 2; i >= 0; --i)
        {
            if (un[s[i]] < un[s[i+1]])
            {
                result -= un[s[i]];
            }
            else
            {
                result += un[s[i]];
            }
            
        }
        return result;
    }
};