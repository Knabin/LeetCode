/*
 * 04/22/2021 10:26
 * Status   Accepted	
 * Runtime  4 ms
 * Memory   6.5 MB
 */

class Solution {
public:
    bool checkIfPangram(string sentence) {
        int ch[26]{0}, i;
        
        for (i = 0; i < sentence.length(); ++i)
        {
            ++ch[sentence[i] - 97];
        }
        
        for (i = 0; i < 26; ++i)
        {
            if (ch[i] == 0) return false;
        }
        
        return true;
    }
};