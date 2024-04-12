class Solution {
    vector<int> r1;
    vector<int> r2;
private:
    int check1(TreeNode* root){
    if(root==NULL) return{};
    else{
        if(root->left==NULL && root->right==NULL) r1.push_back(root->val);
        check1(root->left);
        check1(root->right);
    }
    return {};
    }
    int check2(TreeNode* root){
    if(root==NULL) return{};
    else{
        if(root->left==NULL && root->right==NULL) r2.push_back(root->val);
        check2(root->left);
        check2(root->right);
    }
    return {};
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {        
    check1(root1);
    check2(root2);
    if(r1.size()!=r2.size()) return false;
    for(int i=0;i<r1.size();i++){
        if(r1[i]!=r2[i]) return false;
    }
    return true;
    }
};