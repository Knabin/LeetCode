/*
 * 04/28/2021 10:14
 * Status   Accepted	
 * Runtime  116 ms
 * Memory   64.7 MB
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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (root == nullptr) return 0;
        int sum = 0;
        if (low < root->val)
        {
            sum += rangeSumBST(root->left, low, high);
        }
        if (high > root->val)
        {
            sum += rangeSumBST(root->right, low, high);
        }
        if (low <= root->val && high >= root->val)
        {
            sum += root->val;
        }
        return sum;
    }
};