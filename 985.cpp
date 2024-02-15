class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> res;
        for(int i=0;i<queries.size();i++){
            nums[queries[i][1]] = nums[queries[i][1]] + queries[i][0];
            int sum = 0;
            for(int j=0;j<nums.size();j++){
            if(nums[j] % 2 == 0) sum=sum+nums[j];
            }
            res.push_back(sum);
        }
        return res;
    }
};