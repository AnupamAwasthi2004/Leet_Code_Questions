class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> mat(m, vector<int>(n,0));
        for(int q=0;q<indices.size();q++){
            int a=indices[q][0];
            int b=indices[q][1];
            for(int i=0;i<n;i++)
            mat[a][i]++;
            for(int j=0;j<m;j++)
            mat[j][b]++;
        }
        int c=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            if(mat[i][j]%2==1)
            c++;
            }
        }
        return c;
    }
};
