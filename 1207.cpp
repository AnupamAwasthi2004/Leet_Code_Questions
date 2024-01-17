class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<int> res;
        for(auto i : mp) res.push_back(i.second);
        sort(res.begin(),res.end());
        for(int i=0;i<res.size()-1;i++) if(res[i]==res[i+1]) return false;
        return true;
    }
};