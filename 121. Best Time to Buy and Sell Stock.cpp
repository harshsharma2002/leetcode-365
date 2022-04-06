class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxx=0,minn=prices[0];
        for(int i=1;i<n;i++){
                maxx=max(maxx,prices[i]-minn);
                minn=min(minn,prices[i]);
        }
    return maxx;
    }
};
