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
    string ans = "";
    void dfs(TreeNode* root, string curr = "") {
        if (!root) return;
        curr.insert(curr.begin(), 'a' + root->val);
        if (!root->left && !root->right) {
            if (ans.empty())
                ans = curr;
            else 
                ans = min(ans, curr);
        }
        dfs(root->left, curr);
        dfs(root->right, curr);
        curr.erase(curr.begin());
    }
    
    string smallestFromLeaf(TreeNode* root) {
        dfs(root);
        return ans;
    }
};