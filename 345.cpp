class Solution {
public:
    string reverseVowels(string s) {
     string r1;
     for(int i=s.length()-1;i>=0;i--){ 
     if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A'  ||  s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
     r1.push_back(s[i]);
    }   
    int p=0;
    for(int i=0;i<s.length();i++){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A'  ||  s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
    s[i]=r1[p];
    p++;
    }
    }
    return s;
    }
};