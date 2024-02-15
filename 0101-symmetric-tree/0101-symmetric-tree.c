/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isMirror(struct TreeNode* leftTree, struct TreeNode* rightTree){
    if(leftTree == NULL && rightTree == NULL) return 1;
    if(leftTree == NULL || rightTree == NULL) return 0;

    return (leftTree->val == rightTree->val) && isMirror(leftTree->left, rightTree->right) && isMirror(leftTree->right, rightTree->left);
}

bool isSymmetric(struct TreeNode* root) {
    if(root == NULL) return 1;

    return isMirror(root->left, root->right);
}