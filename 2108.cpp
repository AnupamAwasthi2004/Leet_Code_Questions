class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            int y = check(words[i]);
            if(y==1) return words[i];
        }
        return {};
    }
    int check(string k){
        int i=0, j=k.size()-1;
        while(i<j){
            if(k[i]!=k[j]) return -1;
            else{
                i++;
                j--;
            }
        }
        return 1;
    }
};