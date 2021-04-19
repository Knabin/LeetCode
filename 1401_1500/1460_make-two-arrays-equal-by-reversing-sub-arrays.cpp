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


/*
 * 04/19/2021 12:51
 * Status   Accepted	
 * Runtime  16 ms
 * Memory   13.9 MB
 */
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int check[1001] { 0 };
        for (int i = 0; i < target.size(); ++i)
        {
            ++check[target[i]];
            --check[arr[i]];
        }
        for (int i = 0; i <= 1000; ++i)
        {
            if (check[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};


/*
 * 04/19/2021 12:54
 * Status   Accepted	
 * Runtime  16 ms
 * Memory   14 MB
 */

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(begin(target), end(target));
        sort(begin(arr), end(arr));
        
        return target == arr;
    }
};