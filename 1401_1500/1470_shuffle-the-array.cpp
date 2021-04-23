/*
 * 04/23/2021 18:53
 * Status   Accepted	
 * Runtime  4 ms
 * Memory   9.8 MB
 */


class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        result.reserve(nums.size());
        for (int i = 0; i < n; ++i)
        {
            result.push_back(nums[i]);
            result.push_back(nums[i+n]);
        }
        return result;
    }
};