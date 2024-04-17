class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> mid;
        mid.push_back(nums[0]);
        result.push_back(mid);
        for(int i=1; i<nums.size();i++){
            vector<vector<int>> temp;
            copy(result.begin(),result.end(),back_inserter(temp));
            for(int j=0;j<temp.size();j++){
                temp[j].push_back(nums[i]);
            }
            result.insert(result.end(),temp.begin(),temp.end());
            mid.clear();
            mid.push_back(nums[i]);
            result.push_back(mid);
            temp.clear();
        }
        int f_result = 0;
        int i =0;
        while(i<result.size()){
            if(result[i].size()==1) {
                f_result = f_result+result[i][0];
            }
            else{
                int k =0;
                for(int j=0;j<result[i].size();j++){
                    k = k^result[i][j]; 
                }
                f_result = f_result+k;
            }
            i++;
        }
        return f_result;
    }
};