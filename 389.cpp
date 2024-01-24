class Solution {
public:
    char findTheDifference(string s, string t) {
        map<int,int>mp1;
        map<int,int>mp2;
        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            mp2[t[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(mp2[t[i]]!=mp1[t[i]]) return t[i];
        }
        return {};
    }
};