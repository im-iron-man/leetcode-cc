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
    int maxDepth(TreeNode *root) {
        if (!root) return 0;
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        if (!isBalanced(root->left)) return false;
        if (!isBalanced(root->right)) return false;
        return abs(maxDepth(root->left) - maxDepth(root->right)) <= 1;
    }
};