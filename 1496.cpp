class Solution {
public:
    bool isPathCrossing(string path) {
        vector<vector<int>>res;
        int x=0;
        int y=0;
        vector<int>abc;
        abc.push_back(0);
        abc.push_back(0);
        res.push_back(abc);
        abc.clear();
        for(int i=0;i<path.size();i++){
            if(path[i]=='N') {
            y++;
            abc.push_back(x);
            abc.push_back(y);
            res.push_back(abc);
            abc.clear();
            }    
            else if(path[i]=='S'){
             y--;
            abc.push_back(x);
            abc.push_back(y);
            res.push_back(abc);
            abc.clear();
            }
            else if(path[i]=='E'){
             x++;
             abc.push_back(x);
            abc.push_back(y);
            res.push_back(abc);
            abc.clear();
            }
            else if(path[i]=='W'){
            x--;
            abc.push_back(x);
            abc.push_back(y);
            res.push_back(abc);
            abc.clear();
            }
        }
        for(int i=0;i<res.size()-1;i++){
            for(int j=i+1;j<res.size();j++){
                if(res[i][0]==res[j][0] && res[i][1]==res[j][1]){
                 return true;
                }
            }
        }
        return false;
    }
};