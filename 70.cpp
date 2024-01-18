class Solution {
public:
    int climbStairs(int n) {
        vector<int>m;
        m.push_back(1);
        m.push_back(1);
        int sum=0;
        for(int i=2;i<=n;i++)
        {
            m.push_back(m[i-1]+m[i-2]);
        }
        return m[n];
    }
};