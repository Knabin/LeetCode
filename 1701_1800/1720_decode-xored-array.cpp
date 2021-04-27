/*
 * 04/27/2021 18:26
 * Status   Accepted	
 * Runtime  24 ms
 * Memory   26 MB
 */

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res {first};
        for(int i = 0; i < encoded.size(); ++i)
        {
            res.push_back(res[i] ^ encoded[i]);
        }
        return res;
    }
};