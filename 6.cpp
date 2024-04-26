class Solution {
public:
    string convert(string s, int numRows) {
        if(s.size() == 1 || (s.size()<numRows) || numRows == 1) return s;
        vector<string> temp(numRows,"");
        int count = 0;
        int i=0;
        while(count!=s.size()){
            for(i=0;i<numRows;i++){
                if(count==s.size()) break;
                temp[i].push_back(s[count]);
                count++;
            }
            i=i-2;
            while(i!=0){
                if(count==s.size()) break;
                temp[i].push_back(s[count]);
                count++;
                i--;
            }
        }
        string result;
        for(int i=0;i<temp.size();i++)
        {
            for(int j=0;j<temp[i].size();j++)
                result.push_back(temp[i][j]);
        }
        return result;
    }
};

