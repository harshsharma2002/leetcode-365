class Solution {
public:
    bool checkOnesSegment(string s) {
        int curr=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                curr++;
                if(curr==1){
                    ans++;
                }
            }else{
                curr=0;
            }
        }
        return ans==1;
    }
};
