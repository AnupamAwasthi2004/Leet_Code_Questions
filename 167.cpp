class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j]>target){
                j--;
                continue;
            }
            else if(nums[i]+nums[j]<target){
            i++;
            continue;
        }
            else{
                res.push_back(i+1);
                res.push_back(j+1);
                return res;
            }
        }
        return res;
    }
};