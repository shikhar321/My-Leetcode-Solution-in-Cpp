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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> a;
        queue<TreeNode*> b;
        a.push(p);
        b.push(q);
        while(a.size() != 0 && b.size() != 0) {
                
            if((a.front() != NULL && b.front() != NULL) && (a.front()->val != b.front()->val))  
                return false;
            else if((a.front() == NULL && b.front() != NULL) || (a.front() != NULL && b.front() == NULL))
                return false;
            else{
                TreeNode* t1 = a.front();
                TreeNode* t2 = b.front();
                a.pop();
                b.pop();
                if(t1 != NULL) {
                    a.push(t1->left);
                    b.push(t2->left);
                }
                if(t2 != NULL) {
                    a.push(t1->right);
                    b.push(t2->right);
                }
            }
        }
        return true;
    }
};