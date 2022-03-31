class Solution {
public:
    bool halvesAreAlike(string s) {
        string a;
        string b;
        for(int i=0;i<s.length()/2;i++){
            a+=s[i];
        }
        for(int i=s.length()/2;i<s.length();i++){
            b+=s[i];
        }
        
        int c1=0,c2=0;
        for(int i=0;i<s.length()/2;i++){           if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
                c1++;
            }
            if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U'){
                c2++;
            }
        }
        if(c1==c2)
            return true;
        return false;
    }
};
