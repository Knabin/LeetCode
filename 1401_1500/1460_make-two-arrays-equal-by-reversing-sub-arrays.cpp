/*
 * 04/19/2021 12:45
 * Status   Accepted	
 * Runtime  20 ms
 * Memory   14.1 MB
 */

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        for (int left = 0; left < target.size(); ++left)
        {
            if (target[left] == arr[left]) continue;
        
            auto iter = find(arr.begin() + left, arr.end(), target[left]);
            if (iter == arr.end())
            {
                return false;
            }
        
            int index = distance(arr.begin(), iter);
            swap(arr[left], arr[index]);
        }
        
        return true;
    }
};