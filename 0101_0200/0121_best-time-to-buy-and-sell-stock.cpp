/*
 * 04/19/2021 17:05
 * Status   Time Limit Exceeded	
 * Runtime  N/A
 * Memory   N/A
 * 일단 느리게 짜 봤음.
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int max = INT_MIN;
        
        for (int i = 0; i < prices.size(); ++i)
        {
            int temp = INT_MIN;
            for (int j = i + 1; j < prices.size(); ++j)
            {
                if (temp < prices[j] - prices[i]) 
                {
                    temp = prices[j] - prices[i];
                }
            }
            if (temp > max) max = temp;
        }
            
        if (max < 0) max = 0;
        
        return max;
    }
};


/*
 * 04/19/2021 17:16
 * Status   Accepted
 * Runtime  140 ms
 * Memory   93.3 MB
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxi = INT_MIN;
        int mini = INT_MAX;
        
        for (int i = 0; i < prices.size(); ++i)
        {
            mini = min(mini, prices[i]);
            maxi = max(maxi, prices[i] - mini);
        }
        
        return maxi;
    }
};