class Solution {
public:
    int maxScore(string s) {
        vector<int>p;
        vector<int>q;
       for(int i=0;i<s.size()-1;i++){
           int y=0;
           for(int j=0;j<=i;j++){
           if(s[j]-48==0) y++;
           }
           p.push_back(y);
       }
       for(int i=0;i<s.size()-1;i++){
           int y=0;
           for(int j=i+1;j<s.size();j++){
           if(s[j]-48==1) y++;
           }
           q.push_back(y);
       }
       for(int i=0;i<p.size();i++){
           p[i]=p[i]+q[i];
       }
       if(p.size()==0 && q.size()==0) return 0;
        if(p.size()==0 || q.size()==0) return s.size()-1;
       sort(p.begin(),p.end());
       return p[p.size()-1];
    }
};