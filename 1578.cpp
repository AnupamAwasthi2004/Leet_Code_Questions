class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int y=0;
        vector<int>res;
        for(int i=0;i<colors.size()-1;){
            res.push_back(neededTime[i]);
            int j=i+1;
            while(j<colors.size() && colors[i]==colors[j]){
                res.push_back(neededTime[j]);
                j++;
            }
            if(res.size()==1){
                res.clear();
                i=j;
                continue;
            }
            else{
                int sum=0;
                int max=INT_MIN;
                for(int k=0;k<res.size();k++){
                    printf("%dk=",res[k]);
                    if(res[k]>max) {
                        max=res[k];
                        printf("%d\n",max);
                    }
                    sum=sum+res[k];
                }
                sum=sum-max;
                // printf("\n%d",sum);
                y=y+sum;
                i=j;
                res.clear();
            }
        }
        return y;
    }
};