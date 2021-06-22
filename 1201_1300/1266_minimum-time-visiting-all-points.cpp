/*
 * 06/22/2021 23:46
 * Status   Accepted	
 * Runtime  8 ms
 * Memory   10.2 MB
 */

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int res = 0;
        for (int i = 1; i < points.size(); ++i)
        {
            res += max(abs(points[i][0] - points[i-1][0]), abs(points[i][1] - points[i-1][1]));
        }
        
        return res;
    }
};