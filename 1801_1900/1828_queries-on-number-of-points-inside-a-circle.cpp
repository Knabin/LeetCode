/*
 * 05/14/2021 10:33
 * Status   Accepted	
 * Runtime  68 ms
 * Memory   16.2 MB
 */

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {        
        vector<int> result(queries.size());
        
        for (int i = 0; i < queries.size(); ++i)
        {
            auto x = queries[i][0];
            auto y = queries[i][1];
            auto r = queries[i][2];
            
            for (int j = 0; j < points.size(); ++j)
            {
                auto px = points[j][0];
                auto py = points[j][1];

                if(pow(px - x, 2) + pow(py - y, 2) <= pow(r, 2)) ++result[i];
            }
        }
        
        return result;
    }
};