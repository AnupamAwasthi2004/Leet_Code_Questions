class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        vector<int> temp1;
        temp1.push_back(1);
        result.push_back(temp1);
        if(numRows==1) return result;
        temp1.push_back(1);
        result.push_back(temp1);
        if(numRows==2) return result;
        for(int i=3;i<=numRows;i++){
            vector<int> temp2;
            temp2.push_back(temp1[0]);
            for(int j=0;j<temp1.size()-1;j++)
            temp2.push_back(temp1[j]+temp1[j+1]);
            temp2.push_back(temp1[temp1.size()-1]);
            temp1  = temp2;
            result.push_back(temp1);
        }
        return result;
    }
};