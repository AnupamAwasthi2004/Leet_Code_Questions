class Solution {
    map<int,int>mp;
public:
    vector<int> findMode(TreeNode* root) {
        if(root==NULL){
            return{};
        }
        else{
            mp[root->val]++;
            findMode(root->left);
            findMode(root->right);
        }
        int max = 0;
        for(auto it: mp) if(it.second >  max) max = it.second;
        vector<int> result;
         for(auto it=mp.begin(); it!=mp.end(); it++) if(it->second ==  max) result.push_back(it->first);
        return result;
        
    }
};