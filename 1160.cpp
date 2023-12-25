class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int y=0;
        map<int,int>mp1;
        map<int,int>mp2;
        for(int i=0;i<chars.size();i++) {
            mp1[chars[i]]++;
        }
       for(int i=0;i<words.size();i++){
        for(int j=0;j<words[i].size();j++){
            mp2[words[i][j]]++;
        }
        int p=0;
        for(int k=0;k<words[i].size();k++){
            if(mp2[words[i][k]]>mp1[words[i][k]]){
                p++;
                break;
            }
        }
        mp2.clear();
        if(p>0) continue;
        else y=y+words[i].size();
       }
       return y;
    }
};