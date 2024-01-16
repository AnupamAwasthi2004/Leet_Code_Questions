class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
    double ans=0;
    if(income==0) return ans;
    if(income<=brackets[0][0]){
    ans=double(income*(brackets[0][1]))/100.00;
    return ans;
    }
    ans=double(brackets[0][0]*(brackets[0][1]))/100.0;
     for(int i=1;i<brackets.size();i++){
         if(brackets[i][0]>income){
             int p=income-brackets[i-1][0];
             ans=ans+double(brackets[i][1]*p)/100.00;
             break;
         }
         else{
             int p=brackets[i][0]-brackets[i-1][0];
             ans=ans+double(p*brackets[i][1])/100.00;
            //  printf("%d\n",ans);
         } 
     }
    return ans;
    }
};