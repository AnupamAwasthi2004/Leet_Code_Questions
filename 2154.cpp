class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        map<int,int>mp;
    for(int i=0;i<nums.size();i++) mp[nums[i]]++;
    while(true){
        int y=finding(original,mp);
        if(y==1) original=original*2;
        else return original;
    }
    return {};
    }
    private:
    int finding(int n, map<int,int>mp){
        if(mp[n]>0) return 1;
        return -1;
    }
};