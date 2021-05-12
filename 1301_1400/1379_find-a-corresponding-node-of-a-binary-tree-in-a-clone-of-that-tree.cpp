/*
 * 05/12/2021 12:14
 * Status   Accepted	
 * Runtime  468 ms
 * Memory   163.9 MB
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* searchTree(TreeNode* ori_root, TreeNode* clo_root, TreeNode* target) {
        if (!ori_root || !clo_root) return nullptr;
        if (ori_root == target) return clo_root;
        
        auto l = searchTree(ori_root->left, clo_root->left, target);
        auto r = searchTree(ori_root->right, clo_root->right, target);
        
        return l ? l : r;
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return searchTree(original, cloned, target);
    }
};