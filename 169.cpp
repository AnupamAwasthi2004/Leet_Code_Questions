class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size();
        map<int,int>a;
        for(int i=0;i<n;i++)
        a[nums[i]]++;
        for(int i=0;i<nums.size();i++){
            if(a[nums[i]]>(n/2))
            return nums[i];
        }
       return {};
    }
};