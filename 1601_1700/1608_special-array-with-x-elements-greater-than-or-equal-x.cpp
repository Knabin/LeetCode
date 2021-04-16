/*
 * 04/16/2021 17:42
 * Status   Accepted	
 * Runtime  4 ms
 * Memory   8.4 MB
 */

class Solution {
public:
    int specialArray(vector<int>& nums) {
        int x = 1;
        int cnt = 0;
        
        while(x <= nums.size())
        {
            cnt = 0;
            for (int i = 0; i < nums.size(); ++i)
            {
                if(x <= nums[i])
                {
                    ++cnt;
                }
            }
            if (cnt == x) return x;
            else ++x;
        }
        
        return -1;
    }
};


/*
 * 04/16/2021 17:48
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   8.3 MB
 * 
 * 계수 정렬(counting sort)이란 것을 이용하여 푼 경우가 많은 것 같다. 찾아보기.
 */

class Solution {
public:
    int specialArray(vector<int>& nums) {
        int x[1001] = {0};
        
        for (int i = 0; i < nums.size(); ++i)
        {
            ++x[nums[i]];
        }
        
        int sum = 0;
        
        for (int i = 1000; i > 0; --i)
        {
            sum += x[i];
            if (sum == i) return i;
        }
        
        return -1;
    }
};