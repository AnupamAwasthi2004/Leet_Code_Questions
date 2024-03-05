class Solution {
public:
    int findComplement(int num) {
     vector<int> pre;
     while(num!=0){
         pre.push_back(num%2);
         num=num/2;
     }   
     int result=0;
     for(int i=0;i<pre.size();i++){
         if(pre[i]==0) result=result+pow(2,i);
     }
     return result;
    }
};