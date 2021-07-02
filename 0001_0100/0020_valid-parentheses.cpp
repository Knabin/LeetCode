/*
 * 07/02/2021 16:35
 * Status   Accepted	
 * Runtime  0 ms    (faster than 100.00%)
 * Memory   6.4 MB  (less than 8.20%)
 */

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty()) return false;
                
                auto latest = st.top();
                st.pop();
                switch(s[i])
                {
                    case ')':
                        if (latest != '(') return false;
                        break;
                    case ']':
                        if (latest != '[') return false;
                        break;
                    case '}':
                        if (latest != '{') return false;
                        break;
                }
            }
        }
        
        return st.empty();
    }
};