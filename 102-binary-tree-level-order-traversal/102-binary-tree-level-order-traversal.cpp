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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>result;//Result array with lists
        if(root==NULL)return result;
        
        queue<TreeNode*> q;//Declaring queue
        q.push(root);
        while(!q.empty()){
            int count=q.size();//Number of nodes in queue
            vector<int>curr;//List for each level of tree
            for(int i=0;i<count;i++){
                TreeNode* node=q.front();
                q.pop();
                curr.push_back(node->val);//Adding node root value
                
                if (node->left != NULL) {
                    q.push(node->left);//Adding left value
                }
                if (node->right != NULL) {
                    q.push(node->right);//Adding right value
                }
            }
            result.push_back(curr);
        }
        return result;
    }
};