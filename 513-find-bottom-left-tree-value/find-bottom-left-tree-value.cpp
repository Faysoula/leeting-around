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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;

        q.push(root);
        TreeNode* curr = root;

        while(!q.empty()){
            curr = q.front();
            if(curr->right != NULL){
                q.push(curr->right);
            }
            if(curr->left != NULL){
                q.push(curr->left);
            }
            q.pop();
        }
        return curr->val;
    }
};