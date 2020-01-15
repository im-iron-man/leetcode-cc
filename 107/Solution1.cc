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
    
    void levelOrderBottom(TreeNode *root, vector<vector<int>> &result, int depth) {
        if (!root) return;
        depth--;
        result[depth].push_back(root->val);
        levelOrderBottom(root->left, result, depth);
        levelOrderBottom(root->right, result, depth);
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int depth = maxDepth(root);
        vector<vector<int>> result(depth, vector<int>());
        levelOrderBottom(root, result, depth);
        return result;
    }
};