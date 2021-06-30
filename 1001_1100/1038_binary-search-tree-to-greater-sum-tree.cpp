/*
 * 06/30/2021 10:48
 * Status   Accepted	
 * Runtime  0 ms    (faster than 100.00%)
 * Memory   8.1 MB  (less than 87.67%)
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        int value = 0;
        sumTree(root, value);
        return root;
    }
    
    void sumTree(TreeNode* node, int& value) {
        if (node == nullptr) return;
        
        sumTree(node->right, value);
        
        node->val += value;
        value = node->val;
        
        sumTree(node->left, value);
    }
};