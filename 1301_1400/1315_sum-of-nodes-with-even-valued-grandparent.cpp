/*
 * 06/18/2021 23:43
 * Status   Accepted	
 * Runtime  40 ms
 * Memory   38.1 MB
 */

class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        return dfs(root, nullptr, nullptr);
    }
    
    int dfs(TreeNode* current, TreeNode* parent, TreeNode* gparent)
    {
        if (current == nullptr) return 0;
        
        auto sum = 0;
        if (gparent != nullptr && gparent->val % 2 == 0)
        {
            sum += current->val;
        }
        
        sum += dfs(current->left, current, parent);
        sum += dfs(current->right, current, parent);
        
        return sum;
    }
};