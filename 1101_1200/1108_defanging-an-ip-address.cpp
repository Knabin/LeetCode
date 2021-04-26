/*
 * 04/26/2021 10:42
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   5.9 MB
 */

class Solution {
public:
    string defangIPaddr(string address) {
        for (size_t i = 0; i < address.size(); i++)
        {            
            if (address[i] == '.')
            {
                address.replace(i, 1, std::string("[.]"));
                i += 2;
            }
        }

        return address;
    }
};