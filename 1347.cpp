class Solution {
public:
    int minSteps(string s, string t) {
        map<int,int> mps; 
        map<int,int> mpt;
        int count =0;
        for(int i=0;i<s.size();i++) mps[s[i]]++;
        for(int i=0;i<t.size();i++) mpt[t[i]]++;
        string z= change(s);
        for(int i=0;i<z.size();i++){
            if(mps[z[i]]>mpt[z[i]]){
             count=count+(mps[z[i]]-mpt[z[i]]);
        }
        }
        return count;
    }
    private:
      string change(string p){ // to remove duplicate elements
          map<int,int>mp;
          for(int i=0;i<p.size();i++){
              mp[p[i]]++;
          }
          string res;
          for(int i=0;i<p.size();i++){
              if(mp[p[i]]>0){
              res.push_back(p[i]);
              mp[p[i]]=0;
              }
          }
          return res;
          }
};