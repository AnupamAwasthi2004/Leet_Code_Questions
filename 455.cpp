class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
     sort(g.begin(),g.end());
     sort(s.begin(),s.end()); 
     int p=0;
     for(int i=0;i<g.size();i++){
         p=p+find123(s, g[i]);
     }  
     return p;
    }
private:
    int find123(vector<int>& s, int y){
        for(int i=0;i<s.size();i++){
            if(s[i]>=y)
            {
                s[i]=-1;
                return 1; 
            }
        }
        return 0;
    }
};