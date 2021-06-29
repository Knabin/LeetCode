/*
 * 06/29/2021 18:30
 * Status   Accepted	
 * Runtime  20 ms   (faster than 93.77%)
 * Memory   71.3 MB (less than 77.96%)
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0, temp = 0;
        ListNode* res = new ListNode(0);
        ListNode* nodes = res;  
        
        while (l1 != nullptr && l2 != nullptr)
        {
            sum = l1->val + l2->val + temp;
            nodes->next = new ListNode(sum % 10);
            temp = sum / 10;
            
            l1 = l1->next;
            l2 = l2->next;
            
            nodes = nodes->next;
        }
        
        while (l1 != nullptr)
        {
            nodes->next = new ListNode((l1->val + temp) % 10);
            temp = (l1->val + temp) / 10;
            l1 = l1->next;
            nodes = nodes->next;
        }
        
        while (l2 != nullptr)
        {
            nodes->next = new ListNode((l2->val + temp) % 10);
            temp = (l2->val + temp) / 10;
            l2 = l2->next;
            nodes = nodes->next;
        }
        
        while (temp > 0)
        {
            nodes->next = new ListNode(temp % 10);
            temp /= 10;
            nodes = nodes->next;
        }
        
        if (res->next == nullptr) return res;
        
        return res->next;
    }
};