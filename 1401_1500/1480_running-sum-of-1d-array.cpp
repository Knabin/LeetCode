/*
 * 04/19/2021 18:35
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   8.6 MB
 */

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); ++i)
        {
            nums[i] = nums[i - 1] + nums[i];
        }
        
        return nums;
    }
};