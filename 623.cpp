class Solution {
    int d = 1;
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(root == NULL){ 
            d=d-1;
            return {};
        }
        if(d==depth) {
             TreeNode *temp = new TreeNode(val);
             temp->left=root;
             root = temp;
             root->val = val;
             return root;  
        }
        else if(d == depth-1){
            TreeNode *temp1 = new TreeNode(val);
            TreeNode *temp2 = new TreeNode(val);
            temp1->left = root->left;
            temp2->right = root->right;
            root->left = temp1;
            root->right = temp2;
            d=d-1;
            return root;
        }
        else{
            d=d+1;
            addOneRow(root->left, val, depth);
            d=d+1;
            addOneRow(root->right, val, depth);
        }
         d=d-1;   
        return root;
    }
};