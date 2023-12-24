class Solution {
public:
    int minOperations(string s) {
    if(s.size()==1) return 0; 
     int p=0;
     int q=0;
     string res1;
     string res2;
     for(int i=0;i<s.size();i++){
         if(i%2==0) res1.push_back('0');
         else res1.push_back('1');
     } 
     for(int i=0;i<s.size();i++){
         if(i%2==1) res2.push_back('0');
         else res2.push_back('1');
     } 
     for(int i=0;i<s.size();i++)
     {
         if(s[i]!=res1[i]) p++;
     }
     for(int i=0;i<s.size();i++)
     {
         if(s[i]!=res2[i]) q++;
     }
     if(p<q) return p;
     return q;
    }
};