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
    TreeNode* sortedArrayToBST(vector<int>& nums, int first, int last) {
        if (first > last) return NULL;
        int index = first + (last - first) / 2;
        TreeNode *root = new TreeNode(nums[index]);
        root->left = sortedArrayToBST(nums, first, index - 1);
        root->right = sortedArrayToBST(nums, index + 1, last);
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums, 0, nums.size() - 1);
    }
};