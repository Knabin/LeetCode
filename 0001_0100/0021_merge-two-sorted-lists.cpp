/*
 * 06/26/2021 20:35
 * Status   Accepted	
 * Runtime  0 ms
 * Memory   15 MB
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {                
        ListNode* res = new ListNode();
        ListNode* res_tmp = res;
        ListNode* cur_l1 = l1;
        ListNode* cur_l2 = l2;
        
        while (cur_l1 != nullptr && cur_l2 != nullptr)
        {
            if (cur_l1->val < cur_l2->val)   
            {
                res->next = new ListNode(cur_l1->val);
                cur_l1 = cur_l1->next;
            }
            else
            {
                res->next = new ListNode(cur_l2->val);
                cur_l2 = cur_l2->next;
            }
            
            res = res->next;
        }
        
        while (cur_l1 != nullptr)
        {
            res->next = new ListNode(cur_l1->val);
            cur_l1 = cur_l1->next;
            res = res->next;
        }
        
        while (cur_l2 != nullptr)
        {
            res->next = new ListNode(cur_l2->val);
            cur_l2 = cur_l2->next;
            res = res->next;
        }
        
        return res_tmp->next;
    }
};