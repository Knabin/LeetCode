/*
 * 05/06/2021 10:45
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   8.2 MB
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int result = 0;
        
        while (head != nullptr)
        {
            result = result * 2 + head->val;
            head = head->next;
        }
        
        return result;
    }
};