class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = sum + nums[i];
        }
        if(sum - nums[0] == 0) return 0;
        int temp = nums[0];
        for(int i=1;i<nums.size()-1;i++){
            if(sum - temp - nums[i] == temp) return i;
            else temp = temp + nums[i];
        }
        if(sum - nums[nums.size()-1] == 0) return nums.size()-1;
        return -1;
    }
};