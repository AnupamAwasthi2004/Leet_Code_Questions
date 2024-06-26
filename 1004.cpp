class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        int start = 0;
        int end = 0;
        int count  = 0;
        while( end < n ){
            if(nums[end] == 0) count++;
            while(count > k){
                if(nums[start] == 0) count--;
                start++;
            }
            ans = max(ans , end-start+1);
            end++;
        }
        return ans;
    }
};