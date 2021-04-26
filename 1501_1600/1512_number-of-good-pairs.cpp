/*
 * 04/26/2021 11:28
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   7.3 MB
 */

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> un;
        int result = 0;
        
        for (int i = 0; i < nums.size(); ++i)
        {
            ++un[nums[i]];
        }
        
        for (auto item : un)
        {
            if (item.second > 1)
            {
                result += (item.second - 1) * item.second / 2;
            }
        }
        return result;
    }
};