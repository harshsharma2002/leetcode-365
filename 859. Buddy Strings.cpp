class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        int count=0;
        bool flag=false;
        
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]>=2)
            {
                flag=true;
                break;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=goal[i])
            {
                count++;
            }
        }
        sort(s.begin(),s.end());
        sort(goal.begin(),goal.end());
        if(s!=goal) return false;
        if(count==0 and flag==true)
            return true;
        if(count==2) return true;
        return false;
    }
};
