class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while( root != nullptr){
            if(root->val == val)return root;
         if(root->val<val) root=root->right;
         else root=root->left;
        }
        return root;
    }
};