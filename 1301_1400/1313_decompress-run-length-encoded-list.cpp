/*
 * 04/19/2021 18:23
 * Status   Accepted	
 * Runtime  12 ms
 * Memory   10 MB
 */

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        
        for (int i = 0; i < nums.size(); i+=2)
        {
            for(int j = 0; j < nums[i]; ++j)
            {
                result.push_back(nums[i + 1]);
            }
        }
        
        return result;
    }
};


/*
 * 04/19/2021 18:29
 * Status   Accepted	
 * Runtime  8 ms
 * Memory   10.6 MB
 */

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        
        for (int i = 0; i < nums.size(); i += 2)
        {
            vector<int> temp(nums[i], nums[i+1]);
            result.insert(result.end(), temp.begin(), temp.end());
        }
        
        return result;
    }
};