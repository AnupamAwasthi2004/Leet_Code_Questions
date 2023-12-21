class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>x_coordinate;
        for(int i=0; i<points.size(); i++)
        x_coordinate.push_back(points[i][0]);
        sort(x_coordinate.begin(), x_coordinate.end());
        int max=INT_MIN;
        for(int i=0; i<x_coordinate.size()-1; i++){
            if(x_coordinate[i+1] - x_coordinate[i] > max)
            max=x_coordinate[i+1] - x_coordinate[i];
        }
        return max;
    }
};