class Solution {
public:
    bool repeatedSubstringPattern(string s) {
    string s1="";
    int n=s.size(),m;
    for(int i=0;i<s.size()-1;i++)
    {
        s1+=s[i];
        m=s1.size();
        if(n%m==0)
        {
            string s2="";
            int it=n/m;
            while(it--)
            {
                s2+=s1;
            }
            if(s2==s)
                return true;
        }
    }
    return false;
}
};
