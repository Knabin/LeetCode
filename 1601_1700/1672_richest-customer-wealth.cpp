/*
 * 04/27/2021 18:07
 * Status   Accepted	
 * Runtime  4 ms
 * Memory   7.9 MB
 */

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = INT_MIN;
        
        for (int i = 0; i < accounts.size(); ++i)
        {
            int tmp = 0;
            for (int j = 0; j < accounts[i].size(); ++j)
            {
                tmp += accounts[i][j];
            }
            if (tmp > max) max = tmp;
        }
        
        return max;
    }
};