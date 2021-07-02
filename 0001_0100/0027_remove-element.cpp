/*
 * 07/02/2021 17:57
 * Status   Accepted	
 * Runtime  4 ms    (faster than 49.77%)
 * Memory   8.8 MB  (less than 70.90%)
 * 
 * Memo : Three points
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.empty()) return 0;
        
        int search = 0, add = 0, res = 0;
        
        while (search != nums.size())
        {
            if (search + add == nums.size()) break;
            if (nums[search + add] == val)
            {
                add++;
            }
            else
            {
                //swap(nums[search], nums[search + add]);
                auto tmp = nums[search];
                nums[search] = nums[search + add];
                nums[search + add] = tmp;
                
                ++res; ++search;
                add = 0;
            }
        }
        return res;
    }
};


/*
 * 07/02/2021 18:03
 * Status   Accepted	
 * Runtime  0 ms    (faster than 100.00%)
 * Memory   8.8 MB  (less than 70.90%)
 * 
 * Memo : Two points
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.empty()) return 0;
        
        int left = 0, right = 0;
        
        while (right < nums.size())
        {
            if (nums[right] != val) nums[left++] = nums[right];
            right++;
        }
        
        return left;
    }
};