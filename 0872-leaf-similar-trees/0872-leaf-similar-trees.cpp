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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaf1;
        vector<int> leaf2;
        dfs(root1,leaf1);
        dfs(root2,leaf2);
        return leaf1==leaf2;

    }
    void dfs(TreeNode* node,vector<int>& leafs)
    {
        if(node==NULL)
        {
            return;
        }
        if(node->right==NULL&&node->left==NULL)
        {
            leafs.push_back(node->val);
        }
        dfs(node->right,leafs);
        dfs(node->left,leafs);
    }
};
