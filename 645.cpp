class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++) {
            if(nums[i]==nums[i+1]){
                result.push_back(nums[i]);
                nums[i+1]=0;
            }
        }
        sort(nums.begin(),nums.end());
         for(int i=1;i<nums.size();i++){ 
             if(nums[i]!=i){
              result.push_back(i);
              break;
         }
         }
         if(result.size()==1) result.push_back(nums.size());
         return result;
    }
};