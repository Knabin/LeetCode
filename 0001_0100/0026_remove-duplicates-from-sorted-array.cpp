/*
 * 07/02/2021 17:36
 * Status   Accepted	
 * Runtime  8 ms    (faster than 85.26%)
 * Memory   18.4 MB (less than 8.41%)
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int uniq = 0, sch = 1;
        while (sch != nums.size())
        {
            if (nums[sch] == nums[uniq]) 
            {
                ++sch;
            }
            else
            {
                nums[++uniq] = nums[sch];
            }
        }
        
        return uniq + 1;
    }
};