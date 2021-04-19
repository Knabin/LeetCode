/*
 * 04/19/2021 11:56
 * Status   Accepted	
 * Runtime  12 ms
 * Memory   17.5 MB
 */

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> un;
        int min = INT_MAX;
        
        for (int i = 0; i < deck.size(); ++i)
        {
            ++un[deck[i]];
        }
        
        for (auto item : un)
        {
            if (item.second < min)
            {
                min = item.second;
            }
        }
        
        if (min < 2) return false;
        
        for (int i = 2; i <= min; ++i)
        {
            bool result = true;
            
            for (auto item : un)
            {
                if (item.second % i != 0)
                {
                    result = false;
                    break;
                }
            }
            
            if (result)
            {
                return true;
            }
        }

        return false;
    }
};