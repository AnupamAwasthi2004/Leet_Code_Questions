class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int result = 0;
        int n = grid.size()-1;
        int m= grid[0].size()-1;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                   result = result+4;
                   if(i!=0 && grid[i-1][j]==1) result = result-1;
                   if(i!=n && grid[i+1][j]==1) result = result-1;
                   if(j!=0 && grid[i][j-1]==1) result = result-1;
                   if(j!=m && grid[i][j+1]==1) result = result-1;
                }
                else continue;
            }
        }
        return result;
    }
};