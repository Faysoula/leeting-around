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
    int goodNodes(TreeNode* root) {
        
        int res = goodies(root,root->val);
        return res;
    }

    int goodies(TreeNode* root, int maxcount){

        if(root == NULL){
            return 0;
        }
        int res;
        
        if(root->val >= maxcount){
            res = 1;
        }else res= 0;

        maxcount = max(root->val,maxcount);
        res += goodies(root->left,maxcount);
        res += goodies(root->right,maxcount);
        return res;

    }

   
};