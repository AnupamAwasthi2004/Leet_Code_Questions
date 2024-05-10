class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<double> par;
        for(int i =0 ; i < arr.size()-1 ; i++){
            for(int j = 0 ; j < arr.size() ; j++){
                par.push_back(double(arr[i]) / double(arr[j]));
            }
        }
        sort(par.begin(),par.end());
        double find  = par[k - 1];
        vector<int> result;
        for(int i =0 ; i < arr.size()-1 ; i++){
            for(int j = i+1; j < arr.size() ; j++){
                if((double(arr[i]) / double(arr[j])) == find){
                    result.push_back(arr[i]);
                    result.push_back(arr[j]);
                    break;
                }
            }
        }
        return result;
    }
};