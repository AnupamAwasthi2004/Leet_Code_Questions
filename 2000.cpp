class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i = 0;
        while(i!=word.size()){
            if(word[i] == ch) break;
            else i++;
        }
        if(i == word.size()) return word;
        int j = 0;
        while(j<i){
            char temp = word[i];
            word[i] = word[j];
            word[j] = temp;
            i--;
            j++;
        }
        return word;
   }
};