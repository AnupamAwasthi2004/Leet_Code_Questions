class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> result;
         vector<int> tempResult;
         vector<bool> check(nums.size(),true);
         traverse(nums , tempResult , result , check);
        return result;
    }
private:
    void traverse(vector<int>& nums , vector<int>tempResult, vector<vector<int>>& result , vector<bool>& check){
        if(tempResult.size() == nums.size())
        result.push_back(tempResult);
        else{
            for(int i = 0 ; i < nums.size() ; i++){
                if(check[i]){
                check[i] = false;
                tempResult.push_back(nums[i]);
                traverse(nums , tempResult , result , check);
                check[i] = true;
                tempResult.pop_back();
                }
          }
        }    
    }
};