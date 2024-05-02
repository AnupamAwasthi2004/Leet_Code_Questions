class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        int i = 0;
        while(i != nums.size()-2){
            if(i!=0 && nums[i] == nums[i-1]){
                i++;
                continue;
            }
            int check = -nums[i];
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                if(nums[j] + nums[k] == check){
                    vector<int> par;
                    par.push_back(nums[i]);
                    par.push_back(nums[j]);
                    par.push_back(nums[k]);
                    result.push_back(par);
                    int p = j+1;
                    while(nums[p] == nums[j] && p<k) p++;
                    j = p;
                    p = k-1;
                    while(nums[p] == nums[k] && p>j) p--;
                    k = p;
                }
                else if(nums[j]+nums[k] < check) j++;
                else k--;
            }
            i++;
        }
        return result;
    }
};