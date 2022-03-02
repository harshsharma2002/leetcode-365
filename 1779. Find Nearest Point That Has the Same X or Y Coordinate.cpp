class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int a,b,ans,minn=INT_MAX,m=-1;
        for(int i=0;i<points.size();i++){
            a=points[i][0];
            b=points[i][1];
            if(x==a||y==b){
                ans=abs(x-a)+abs(y-b);
                if(minn>ans){
                    minn=ans;
                    m=i;
                }
            }
        }
            return m;
    }
};
