class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        vector<int>maxarr;
        int max=prices[prices.size()-1];
        maxarr.push_back(max);
        for(int i=prices.size()-2;i>=0;i--){
         if(prices[i]>max) max=prices[i];
         maxarr.push_back(max);
        }
        int  i=0;
        int j=maxarr.size()-1;
        while(i<prices.size()){
            if(maxarr[j]-prices[i]>res) res=maxarr[j]-prices[i];
            i++;
            j--;
        }
        return res;
    }
};