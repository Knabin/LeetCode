/*
 * 07/01/2021 11:38
 * Status   Accepted
 * Runtime  20 ms   (faster than 60.17%)
 * Memory   16.8 MB (less than 83.90%)
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i = 1; i < nums.size(); ++i)
        {
            nums[0] ^= nums[i];
        }
        
        return nums[0];
    }
};