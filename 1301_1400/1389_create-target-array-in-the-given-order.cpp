/*
 * 04/27/2021 18:39
 * Status   Accepted	
 * Runtime  4 ms
 * Memory   8.5 MB
 */

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> res;
        res.reserve(nums.size());
        
        for (int i = 0; i < nums.size(); ++i)
        {
            res.insert(res.begin() + index[i], nums[i]);
        }
        
        return res;
    }
};