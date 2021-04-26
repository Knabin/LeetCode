/*
 * 04/26/2021 11:04
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   9 MB
 */

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int check[101]{ 0 };
        int max = INT_MIN;
        
        for (int i = 0; i < candies.size(); ++i)
        {
            check[i] = candies[i] + extraCandies;
            if(candies[i] >= max) {
                max = candies[i];
            }
        }
        
        for (int i = 0; i < candies.size(); ++i)
        {
            if (check[i] >= max) 
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }
        
        return result;
    }
};