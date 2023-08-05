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
    int val = 0;
    int sum = 0;
    int calculateheight(TreeNode* root) {
        if(root == NULL)    return 0;
        if(root != NULL)    val++;
        return max(calculateheight(root->left), calculateheight(root->right)) + 1;

    }
    int helper(TreeNode* root, int height) {
        if(root == NULL || height == 0)    
            return sum;
        if(height == 1)
            return root->val;
        return helper(root->left, height-1) + helper(root->right, height-1);
    }
    int deepestLeavesSum(TreeNode* root) {
        int height = calculateheight(root);
        return helper(root, height);
    }
};