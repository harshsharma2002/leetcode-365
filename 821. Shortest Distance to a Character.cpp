class Solution {
public:
    vector<int> dist;
    vector<int> minD;
    
    int shortest(int i){
        int mn=INT_MAX;
        for(auto x:dist){
            mn = min(mn,abs(i-x));
        }
        return mn;
    }
    
    vector<int> shortestToChar(string s, char c) {
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i]==c) dist.push_back(i);
        }
        for(int i=0;i<n;i++){
            minD.push_back(shortest(i));
        }
        return minD;
    }
};
