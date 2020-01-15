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
    bool isBalanced(TreeNode *root, int *a) {
        if (!root) {
            *a = 0;
            return true;
        }
        
        int left, right;
        if (!isBalanced(root->left, &left)) return false;
        if (!isBalanced(root->right, &right)) return false;
        
        *a = max(left, right) + 1;
        return abs(left - right) <= 1;
    }
    
    bool isBalanced(TreeNode* root) {
        int a;
        return isBalanced(root, &a);
    }
};