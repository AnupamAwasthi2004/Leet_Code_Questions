class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++) ans.push_back(0);
        int p=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[p]=nums[i];
                p=p+2;
            }
        }
        p=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=0){
                ans[p]=nums[i];
                p=p+2;
            }
        }
        return ans;
    }
};