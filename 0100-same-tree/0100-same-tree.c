/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (!p && !q) {
        return true; // Both nodes are null, consider them equal
    }
    if (!p || !q) {
        return false; // One of the nodes is null, they are not equal
    }
    if (p->val != q->val) {
        return false; // Values are different, trees are not equal
    }
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);

}