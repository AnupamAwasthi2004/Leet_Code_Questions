class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<int,int>mp;
        for(int i=0; i<words.size(); i++){
            for(int j=0; j<words[i].size(); j++){
                mp[words[i][j]-97]++;
            }
        }
        int n=words.size();
        for(int i=0; i<words.size(); i++){
            for(int j=0; j<words[i].size(); j++){
            if(mp[words[i][j]-97]%n!=0) return false;
        }
        }
        return true;
    }
};