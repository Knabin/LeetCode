/*
 * 05/15/2021 18:58
 * Status   Accepted	
 * Runtime  116 ms
 * Memory   8.8 MB
 */

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> res(boxes.length());
        for (int i = 0; i < boxes.length(); ++i)
        {
            int gap = 0;
            for (int j = 0; j < boxes.length(); ++j)
            {
                if (boxes[j] == '0' || i == j) continue;
                gap += abs(i - j);
            }
            res[i] = gap;
        }
        
        return res;
    }
};
