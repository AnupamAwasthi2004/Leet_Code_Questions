class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;
        else{
            map<int,int>mp1;
            map<int,int>mp2;
            for(int i=0;i<word1.size();i++)
            mp1[word1[i]]++;
            for(int i=0;i<word2.size();i++)
            mp2[word2[i]]++;
            string use = remove(word1);
            for(int i=0;i<use.size();i++){
                if(mp2[use[i]]==0) return false;
                    int p=0;
                    for(int j=0;j<use.size();j++){
                            if(mp1[use[i]]==mp2[use[j]]){
                                p++;
                                mp2[use[j]]=-1;
                                break;
                            }
                    }
                         if(p==0) 
                        return false;
                    }
                }
            return true;
    }
    string remove(string word1){
        map<int,int>mp1;
        string res;
        for(int i=0;i<word1.size();i++) mp1[word1[i]]++;
        for(int i=0;i<word1.size();i++){
        if(mp1[word1[i]]>0){
         res.push_back(word1[i]);
         mp1[word1[i]]=0;
        }
    }
    return res;
    }
};