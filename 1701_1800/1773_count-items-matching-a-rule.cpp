/*
 * 04/16/2021 18:09
 * Status   Accepted	
 * Runtime  72 ms
 * Memory   30.9 MB
 */

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        unordered_map<string, int> um;
        int index;
        
        if (ruleKey == "type") index = 0;
        else if (ruleKey == "color") index = 1;
        else index = 2;
        
        for (int i = 0; i < items.size(); ++i)
        {
            ++um[items[i][index]];
        }
        
        return um[ruleValue];
    }
};


/*
 * 04/16/2021 18:14
 * Status   Accepted	
 * Runtime  72 ms
 * Memory   30.9 MB
 */

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int index;
        int count = 0;
        
        if (ruleKey == "type") index = 0;
        else if (ruleKey == "color") index = 1;
        else index = 2;
        
        for (const auto& item : items)
        {
            if (item[index] == ruleValue)
            {
                ++count;
            }
        }
        
        return count;
    }
};