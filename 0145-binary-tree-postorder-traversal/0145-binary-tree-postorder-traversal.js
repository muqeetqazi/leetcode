/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 left right root
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
function postorderTraversal(root) {
    let temp = [];

    if (root !== null) {
        if (root.left !== null) {
            temp = temp.concat(postorderTraversal(root.left));
        }
        if (root.right !== null) {
            temp = temp.concat(postorderTraversal(root.right));
        }
        temp.push(root.val);
    }

    return temp;
}
