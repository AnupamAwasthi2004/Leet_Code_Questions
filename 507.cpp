class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1)
        return false;
        int p=1;
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            p=p+i;
        }
        if(p==num)
        return true;
        return false;
    }
};