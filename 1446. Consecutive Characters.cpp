class Solution {
public:
    int maxPower(string s) {
        int maxx=0;
        int count=1;
        for(int i=0;i<s.length();i++){
            if(s[i]==s[i+1]){
                count++;
            }
            else{
                maxx=max(maxx,count);
                count=1;
            }
        }
        return maxx;
    }
};
