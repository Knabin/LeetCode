/*
 * 10/04/2022 22:15
 * Status   Accepted	
 * Runtime  60 ms
 * Memory   31.1 MB
 */

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, leftSum = 0;
        for (int x: nums) sum += x;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (leftSum == sum - leftSum - nums[i]) return i;
            leftSum += nums[i];
        }
        return -1;
    }
};