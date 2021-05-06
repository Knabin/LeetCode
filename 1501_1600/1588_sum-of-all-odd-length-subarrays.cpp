/*
 * 05/06/2021 10:27
 * Status   Accepted	
 * Runtime  8 ms
 * Memory   8.3 MB
 */

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int gap = 1;
        int index = 0;
        int result = 0;
        
        while (!(gap > arr.size()))
        {
            for(int i = 0; i < gap; ++i)
            {
                result += arr[index + i];
            }
            
            index++;
            
            if (index + gap > arr.size())
            {
                gap += 2;
                index = 0;
            }
        }
        
        return result;
    }
};