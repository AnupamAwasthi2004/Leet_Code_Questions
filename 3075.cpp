class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long result = 0;
        sort(happiness.begin(),happiness.end());
        int m = 0;
        for(int i = happiness.size()-1; i>=0; i--){
            if(k == m ) break;
            else{
                if(happiness[i] - m > 0)
                result = result + happiness[i] - m;
                m++;
            
            }
        }
        return result;
    }
};