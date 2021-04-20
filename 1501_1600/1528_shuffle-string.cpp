/*
 * 04/20/2021 11:09
 * Status   Accepted	
 * Runtime  4 ms
 * Memory   15.2 MB
 */

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string result;  // result = s 해 놓고 바로 접근해도 된다.
        char ch[101] {'\n'};
        for (int i = 0; i < indices.size(); ++i)
        {
            ch[indices[i]] = s[i];
        }
        
        result.assign(ch, indices.size());
        return result;
    }
};