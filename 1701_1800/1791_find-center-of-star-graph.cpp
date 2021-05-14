/*
 * 05/14/2021 11:59
 * Status   Accepted	
 * Runtime  228 ms
 * Memory   81.9 MB
 */

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> um;
        int result = INT_MIN;
        int index = 0;
        
        for(int i = 0; i < edges.size(); ++i)
        {
            um[edges[i][0]]++;
            um[edges[i][1]]++;
        }
        
        for (auto item : um)
        {
            if (item.second >= result)
            {
                result = item.second;
                index = item.first;
            }
        }
        
        return index;
    }
};


/*
 * 05/14/2021 12:04
 * Status   Accepted	
 * Runtime  176 ms
 * Memory   67.4 MB
 * Comment  생각지도 못한 풀이다... 와우...
 */

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        return edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1] ?
            edges[0][0] : edges[0][1];
    }
};