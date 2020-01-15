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
    bool isSymmetric(TreeNode* p, TreeNode* q) {
        if (p != NULL && q == NULL) return false;
        if (p == NULL && q != NULL) return false;
        if (p == NULL && q == NULL) return true;
        if (!isSymmetric(p->left, q->right)) return false;
        if (!isSymmetric(p->right, q->left)) return false;
        return p->val == q->val;
    }
    
    bool isSymmetric(TreeNode* root) {
        return isSymmetric(root, root);
    }
};