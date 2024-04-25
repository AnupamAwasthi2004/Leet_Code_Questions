class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
     int f_count = 1;
     int count = 1;
        if(nums.size()==1) return 1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                count++;
            }
            else{
                if(f_count<count) f_count =count;
                count = 1;
            }
        }
        if(count>f_count) return count;
        return f_count;
    }
};