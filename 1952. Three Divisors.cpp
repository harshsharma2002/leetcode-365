class Solution {
public:
    bool isThree(int n) {
        int count=0;
        bool flag=false;
        for(int i=n;i>0;i--){
            if(n%i==0)
                count++;
            if(count>3){
                return false;
            }
        }
        if(count==3)
            return true;
        return false;
        
    }
};
