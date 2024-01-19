class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
    vector<int>length;
    int ans=0;
    for(int i=0;i<nums.size();i++) length.push_back(0);
    for(int i=0;i<nums.size();i++){
       int max=0;
        for(int j=0;j<i;j++){
            if(nums[i]>nums[j] && length[j]>max) max=length[j];
        }
        length[i]=max+1;
        if(ans<length[i]) ans=length[i]; 
    }
    return ans;
    }
};
