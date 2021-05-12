/*
 * 05/12/2021 11:10
 * Status   Accepted	
 * Runtime  40 ms
 * Memory   38.2 MB
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
    int getDepth(TreeNode* root) {
        if (!root) return 0;
        return std::max(getDepth(root->left), getDepth(root->right)) + 1;
    }
    
    int getSum(TreeNode* root, int height, int now_height)
    {
        if (!root) return 0;
        if (height -1 == now_height) return root->val;
        return (getSum(root->left, height, now_height+1) + getSum(root->right, height, now_height+1));
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int depth = getDepth(root);
        return getSum(root, depth, 0);
    }
};