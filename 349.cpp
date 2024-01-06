class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int>n;
    map<int,int>mp;
    for(int i=0;i<nums1.size();i++){
       if(mp[nums1[i]]<1)
        mp[nums1[i]]++;
    }
    for(int i=0;i<nums2.size();i++){
        if(mp[nums2[i]]<2 && mp[nums2[i]]>0)
        mp[nums2[i]]++;
    }
            for(int i=0;i<mp.size();i++){
                if(mp[i]==2)
                n.push_back(i);
            }
            return n;
      }
};