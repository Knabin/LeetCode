/*
 * 05/04/2021 16:02
 * Status   Accepted	
 * Runtime  44 ms
 * Memory   30.1 MB
 */

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool alpha[26] = {false};
        int count = words.size();
        
        for (char ch : allowed)
        {
            alpha[ch - 'a'] = true;
        }
        
        for (int i = 0; i < words.size(); ++i)
        {
            for (int j = 0; j < words[i].size(); ++j)
            {
                if (alpha[words[i][j] - 'a'] == false)
                {
                    --count;
                    break;
                }
            }
        }
        
        return count;
    }
};