class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int diff=0;
        vector<char> v;
        vector<char> a;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                diff++;
                v.push_back(s1[i]);
                a.push_back(s2[i]);
            }
        }
        if(v.size()==2){
            if(v[0]==a[1]&&v[1]==a[0]){
                return true;
            }
            else{
            return false;
            }
        }
        if(diff==0)
            return true;
        return false;
    }
};
