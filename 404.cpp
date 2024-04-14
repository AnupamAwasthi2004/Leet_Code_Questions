class Solution {
    int sum = 0;
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if( root == NULL || (root->left == NULL && root->right == NULL) ) return{};
        else{
            if((root->left!=NULL) && (root->left->left == NULL && root->left->right == NULL)) sum=sum+root->left->val;
            sumOfLeftLeaves(root->left);
            sumOfLeftLeaves(root->right);
        }
        return sum;
    }
};