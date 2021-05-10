/*
 * 05/10/2021 14:48
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   5.8 MB
 */

class Solution {
public:
    bool squareIsWhite(string coordinates) {        
        return (coordinates[0] - 'a' + coordinates[1] - '1') % 2;       
    }
};