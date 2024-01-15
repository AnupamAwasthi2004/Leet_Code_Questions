class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
    map<int,int>mp1;
    map<int,int>mp2;
    vector<int>a;
    vector<int>b;
    vector<vector<int>>res;
    for(int i=0;i<matches.size();i++) {
        mp1[matches[i][0]]++;
        mp2[matches[i][1]]++;
    }
    for(int i=0;i<matches.size();i++){
    int p= matches[i][0];
    int q= matches[i][1];
    if(mp1[p]>0 && mp2[p]==0){
         a.push_back(p);
         mp1[p]=0;
    }
    if (mp2[q]==1) b.push_back(q);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    res.push_back(a);
    res.push_back(b);
    return res; 
    }
};