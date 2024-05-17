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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if (root == nullptr) {
            return nullptr;
        }

        // Recursively call the function for the left and right children
        root->left = removeLeafNodes(root->left, target);
        root->right = removeLeafNodes(root->right, target);

        // After processing children, check if the current node is a leaf with the target value
        if (root->left == nullptr && root->right == nullptr && root->val == target) {
            
            return nullptr;
        }

        return root;
    }
};
