class Solution {
    int sum = 0;
    int temp = 0;
public:
    int sumNumbers(TreeNode* root) {
        if(root == NULL) return {};
        if(root->left == NULL && root->right == NULL) {
        temp = temp*10;
        temp = temp+root->val;
        sum = sum+temp;
        temp = temp-root->val;
        temp = temp/10;
        return sum;
        }
        else{
            temp = temp*10;
            temp = temp+root->val;
            sumNumbers(root->left);
            sumNumbers(root->right);
            temp = temp-root->val;
            temp = temp/10;
        }
        return sum;
        
    }
};