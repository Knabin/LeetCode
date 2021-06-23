/*
 * 06/23/2021 23:08
 * Status   Accepted	
 * Runtime  4 ms
 * Memory   8.6 MB
 */

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        set<string> res;
        
        for (auto word : words)
        {
            string mos;
            for (auto ch : word)
            {
                mos += morse[ch - 'a'];
            }
            res.insert(mos);
        }
        
        return res.size();
    }
};