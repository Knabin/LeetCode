/*
 * 05/13/2021 14:25
 * Status   Accepted	
 * Runtime  12 ms
 * Memory   12.4 MB
 */

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> result;
        unordered_map<int, vector<int>> um;
        
        for (int i = 0; i < groupSizes.size(); ++i)
        {
            um[groupSizes[i]].push_back(i);
            
            if (um[groupSizes[i]].size() == groupSizes[i])
            {
                result.push_back(um[groupSizes[i]]);
                um[groupSizes[i]].clear();
            }
        }
        
        return result;
    }
};