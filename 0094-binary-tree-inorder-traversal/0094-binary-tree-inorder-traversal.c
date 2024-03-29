/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int*ans=malloc(100*sizeof(int));
    *returnSize=0;
    struct TreeNode**stack=malloc(100*sizeof(struct TreeNode*));
    int top=0;
    while(top||root){
        if(root){
            stack[top++]=root;
            root=root->left;
        }
        else{
            root=stack[--top];
            ans[(*returnSize)++]=root->val;
            root=root->right;
        }
    }
    free(stack);
    ans=realloc(ans,(*returnSize)*sizeof(int));
    return ans;
}