/*
 * 04/20/2021 11:45
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   10.1 MB
 */

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int i;
        int tmp[101]{ 0 };
        vector<int> res(nums.size());
        
        for (i = 0; i < nums.size(); ++i)
        {
            ++tmp[nums[i]];
        }
        
        for (i = 1; i <= 100; ++i)
        {
            tmp[i] += tmp[i - 1];
        }
        
        for (i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 0)
            {
                res[i] = 0;
            }
            else
            {
                res[i] = tmp[nums[i] - 1];
            }
        }
        
        return res;
    }
};