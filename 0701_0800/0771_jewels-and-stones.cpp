/*
 * 04/20/2021 12:34
 * Status   Accepted	
 * Runtime  4 ms
 * Memory   6.6 MB
 */

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> un;
        int result = 0, i;
        
        for (i = 0; i < stones.length(); ++i)
        {
            ++un[stones[i]];
        }
        
        for (i = 0; i < jewels.length(); ++i)
        {
            result += un[jewels[i]];
        }
        
        return result;
    }
};