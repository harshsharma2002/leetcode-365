class Solution {
public:
    void reverse(string &s,int l,int r){
        while(l<=r){
            swap(s[l],s[r]);
            l++;
            r--;
        }
    }
    string reverseWords(string s) {
        int i=0;
        for(int j=0;j<s.length();j++){
            if(s[j]==' '){
                reverse(s,i,j-1);
                i=j+1;
            }
        }
        reverse(s,i,s.length()-1);
        
        
        return s;
    }
    
};
