class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int>mp;
        map<int,int>mp2;
        vector<vector<int>> res;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
            mp2[nums[i]]++;
        }
        vector<int>y;
        for(int i=0;i<nums.size();i++){
            if(mp2[nums[i]]>0) {
                y.push_back(nums[i]);
                mp2[nums[i]]=0;
            }
        }
        vector<int>x;
        for(int g=0;g<1;){
        int p=0;
        for(int i=0;i<y.size();i++){
            if(mp[y[i]]>0){
            x.push_back(y[i]);
            mp[y[i]]=mp[y[i]]-1;
            p++;
            }
        }
        if(p==0) g++;
        else{
            res.push_back(x);
            x.clear();
        }
        }
        return res;
    }
};