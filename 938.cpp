class Solution {
public:
    int result=0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==nullptr) return {};
        else if((root->val)>high) rangeSumBST(root->left,low,high);
        else if((root->val)<low) rangeSumBST(root->right,low,high);
        else{
            result=result+root->val;
            rangeSumBST(root->left,low,high);
            rangeSumBST(root->right,low,high);
        }
        return result;
    }
};