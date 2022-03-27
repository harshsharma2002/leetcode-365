class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.size();
        if(n<=2) return 0;
        int maxx = 0;
        for(int i=0 ; i<n ; i++){
            for(int j=i+2 ; j<n ; j++){
                if(s[i]==s[j]){
                    maxx = max(maxx , j-i-1);
                }
            }
        }
        if(maxx==0){
            return -1;
        }
        return maxx;
    }
};
