class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int sum=0;
        int maxx=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=gain[i];
            maxx=max(sum,maxx);
        }
        if(maxx<0)
            return 0;
        return maxx;
        
    }
};
