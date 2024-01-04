class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int q=0;
        for(int i=0;i<nums.size();i++){
            int p=find12(mp[nums[i]]);
            if(p==-1) return -1;
            else {
                q=q+p;
                mp[nums[i]]=0;
            }
        }
        return q;
    }
    private:
        int find12(int x){
            if(x==1) return -1;
            if(x==2) return 1;
            else{
                if(x%3==0) return x/3;
                for(int i=2;i<x;i=i+2){
                    if((x-i)%3==0 && i%2==0){
                        int p=(x-i)/3;
                        p=p+(i/2);
                        if(x%2==0){
                        if((x/2)<p) return x/2;
                        }
                        return p;
                    }
                }
            }
            return x/2;
        }
};