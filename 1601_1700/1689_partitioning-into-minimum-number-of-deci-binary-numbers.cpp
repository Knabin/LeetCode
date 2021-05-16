/*
 * 05/16/2021 20:35
 * Status   Accepted	
 * Runtime  28 ms
 * Memory   13.4 MB
 */

class Solution {
public:
    int minPartitions(string n) {
        return *max_element(n.begin(), n.end()) - '0';
    }
};