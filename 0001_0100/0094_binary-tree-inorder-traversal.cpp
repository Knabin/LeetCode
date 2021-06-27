/*
 * 06/27/2021 22:27
 * Status   Accepted	
 * Runtime  4 ms
 * Memory   8.3 MB
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
    void inorder(TreeNode* root, vector<int>& vec)
    {
        if (root == nullptr)
            return;
        
        inorder(root->left, vec);
        vec.push_back(root->val);
        inorder(root->right, vec);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorder(root, res);
        return res;
    }
};