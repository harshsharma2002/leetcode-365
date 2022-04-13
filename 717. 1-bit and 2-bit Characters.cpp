class Solution {
public:
    bool isOneBitCharacter(vector<int>& v) {
        if (v.size()==1)
            return true;
        if(v[v.size()-1]==1)
        return false;
    
    int a = v[0];
    for(int i=1;i<v.size();++i){
        if(a==0 || a==-1){
            a = v[i];
            continue;
        }
        a = -1;
    }
    if(a==-1)
        return false;
    
    return true;
}
};
