/*
 * 05/14/2021 14:19
 * Status   Accepted	
 * Runtime  4 ms
 * Memory   10.1 MB
 */

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> ver(grid.size());
        vector<int> hor(grid[0].size());
        int res = 0;
        
        for (int i = 0; i < grid.size(); ++i)
        {
            for (int j = 0; j < grid[i].size(); ++j)
            {
                if (ver[j] < grid[i][j]) ver[j] = grid[i][j];
                if (hor[i] < grid[i][j]) hor[i] = grid[i][j];
            }
        }
        

        for (int i = 0; i < grid.size(); ++i)
        {
            for (int j = 0; j < grid[i].size(); ++j)
            {
                auto tmp = ver[j] < hor[i] ? ver[j] : hor[i];
                res += tmp - grid[i][j];
            }
        }
        
        return res;
    }
};