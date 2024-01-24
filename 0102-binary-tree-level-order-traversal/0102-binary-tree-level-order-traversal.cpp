/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        vector<vector < int>> levelOrder(TreeNode *root)
        {
            queue<TreeNode*> q;
            vector<vector < int>> a;
            if (root != NULL)
            {
                q.push(root);
            }
            else return a;

            while (!q.empty())
            {
                int count = q.size();
                vector<int> currLevel;

                while (count > 0)
                {
                    TreeNode *curr = q.front();
                    currLevel.push_back(curr->val);
                    q.pop();
                    if (curr->left != NULL)
                    {
                        q.push(curr->left);
                    }
                    if (curr->right != NULL)
                    {
                        q.push(curr->right);
                    }
                    count--;
                }
                a.push_back(currLevel);
            }
            return a;
        }
};