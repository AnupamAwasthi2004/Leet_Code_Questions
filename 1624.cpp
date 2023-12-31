class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
    int res=-1;
    for(int i=0; i<s.size()-1;i++){
        for(int j=i+1;j<s.size();j++){
            if(s[i]==s[j] && (j-i-1)>res)
            res=j-i-1;
        }
    }
    return res;
    }
};