class Solution {
public:
    vector<int> constructRectangle(int area) {
        int l,w,d,m=INT_MAX;
        vector <int> a;
        for(int i=1;i<=sqrt(area);i++)
        {
            if(area%i==0)
            {
                l=i;w=area/l;
                d=w-l;
                if(d<m)
                {
                    a.clear();
                    m=d;
                    a.push_back(w);
                    a.push_back(l);
                }
            }
        }
        return a;
    }
};
