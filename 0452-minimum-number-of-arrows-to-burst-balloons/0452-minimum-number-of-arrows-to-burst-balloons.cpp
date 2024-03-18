class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans;
        sort(points.begin(),points.end(),[](const auto& b,const auto& a){
            return a[1]>b[1];
        });
        int arrow=1;
        int end=points[0][1];
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]>end)
            {
                arrow++;
                end=points[i][1];
            }

        }   
        return arrow;
        
         }
};