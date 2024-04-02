class Solution {
public:
    bool isIsomorphic(string s, string t) {
       if(s.size()!=t.size()) return false;
       int p=0;
       map<int,int>mp;
       while(p<s.size()){
        char c = s[p];
        char d = t[p];
        if(mp[s[p]]>0){
            p++;
            continue;
        }
        mp[s[p]]++;
        for(int i=0;i<s.size();i++){
        if(s[i]==c && t[i]!=d || s[i]!=c && t[i]==d) return false;
        }
        p++;
       }
       return true;
    }
};