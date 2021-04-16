/*
 * 04/16/2021 11:23	
 * Status   Accepted	
 * Runtime  4 ms
 * Memory   8.8 MB
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int selectIndex = 0;
        int moveIndex = 1;
        
        vector<int> result;
        
        while (selectIndex != nums.size())
        {
            if (nums[selectIndex] + nums[moveIndex] == target)
            {
                result.push_back(selectIndex);
                result.push_back(moveIndex);
                return result;
            }
            else if (++moveIndex == nums.size())
            {
                ++selectIndex;
                moveIndex = selectIndex + 1;
            }
        }
        return result;
    }
};


/*
 * 04/16/2021 11:42	
 * Status   Accepted	
 * Runtime  8 ms
 * Memory   9 MB
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        
        for (int i = 0; i < nums.size(); ++i)
        {
            int gap = target - nums[i];
            auto iter = m.find(gap);
            
            if (iter != m.end())
            {
                result.push_back(i);
                result.push_back(iter->second);
                break;
            }
            else
            {
                m[nums[i]] = i;
            }
        }
        
        return result;
    }
};