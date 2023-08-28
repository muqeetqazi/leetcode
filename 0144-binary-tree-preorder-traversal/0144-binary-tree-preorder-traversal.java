/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 //root left right
 * }
 */
class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {
        List<Integer> temp = new ArrayList<Integer>();
        if (root != null) {
            temp.add(root.val);
            if (root.left != null) {
                temp.addAll(preorderTraversal(root.left));
            }
            if (root.right != null) {
                temp.addAll(preorderTraversal(root.right));
            }
        }
        return temp;
    }
}
