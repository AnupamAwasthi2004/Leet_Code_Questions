class Solution {
public:
    string frequencySort(string s) {
     map<int,int>mp;
     vector<int> rs;
     for(int i=0;i<s.size();i++)    mp[s[i]]++;   
     string res;
     for(auto i=mp.begin(); i!=mp.end(); i++) rs.push_back(i->second);
      sort(rs.begin(),rs.end());
      for(int i=rs.size()-1;i>=0;i--)
      {
          for(int j=0;j<s.size();j++){
              if(mp[s[j]]==-1) continue;
              if(mp[s[j]]==rs[i]){
                  for(int k=0;k<rs[i];k++) res.push_back(s[j]);
                  mp[s[j]]=-1;
              }
          }
      }
      return res;
    }
};