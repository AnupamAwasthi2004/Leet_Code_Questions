class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>temp;
        for(int i=0;i<score.size();i++){
            temp.push_back(score[i]);
        }
        sort(temp.begin(),temp.end());
        vector<string> res;
        for(int i=0;i<score.size();i++){
            int p;
            p=find123(score[i],temp);
            if(p==1) res.push_back("Gold Medal");
            else if(p==2) res.push_back("Silver Medal");
            else if(p==3) res.push_back("Bronze Medal");
            else {
            string y=to_string(p);
            res.push_back(y);
            }
            }
        return res;
    }
private:
    int find123(int p,vector<int>q){
        int n=q.size();
        for(int i=0;i<n;i++){
            int z=n-i;
            if(p==q[i]){
            if(i==n-1) return (1);
            else if(i==n-2) return (2);
            else if(i==n-3) return (3);
            else return (z);
            }
        }
        return {};
    }
};