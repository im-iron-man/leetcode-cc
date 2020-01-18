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
    bool hasPathSumNull(TreeNode *root, int sum) {
        if (!root) return sum == 0;
        sum -= root->val;
        if (!root->left && !root->right) return sum == 0;
        return (root->left && hasPathSumNull(root->left, sum)) || (root->right && hasPathSumNull(root->right, sum));
    }
    
    bool hasPathSum(TreeNode* root, int sum) {
        if (!root) return false;
        return hasPathSumNull(root, sum);
    }
};