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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         if (p->val < root->val && q->val < root->val) {//If both smaller than root, then LCA on left side
            return lowestCommonAncestor(root->left, p, q);
        } else if (p->val > root->val && q->val > root->val) {//If both bigger than root, then LCA on right side
            return lowestCommonAncestor(root->right, p, q);
        } else {
            return root;//For all other cases when equal or if only one is smaller, then the root of whole tree=ans
        }
    }
};