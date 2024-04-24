class Solution {
public:
    int tribonacci(int n) {
        int temp1=0;
        int temp2=1;
        int temp3=1;
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        for(int i=3;i<=n;i++){
            int sum=0;
            sum=temp1+temp2+temp3;
            temp1=temp2;
            temp2=temp3;
            temp3=sum;
        }
        return temp3;
    }
};