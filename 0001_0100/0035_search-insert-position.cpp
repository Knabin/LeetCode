/*
 * 06/30/2021 15:43
 * Status   Accepted	
 * Runtime  0 ms    (faster than 100.00%)
 * Memory   9.7 MB  (less than 52.56%)
 */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        
        return left;
    }
};