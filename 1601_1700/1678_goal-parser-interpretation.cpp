/*
 * 04/27/2021 18:15
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   5.9 MB
 */

class Solution {
public:
    string interpret(string command) {
        string res = "";
        
        for (int i = 0; i < command.length(); ++i)
        {
            if (command[i] == ')') continue;
            else if (command[i] == '(' && command[i+1] == ')') res += 'o';
            else if (command[i] != '(') res += command[i];
        }
        
        return res;
    }
};