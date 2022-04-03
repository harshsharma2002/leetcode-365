class Solution {
public:
    int getLucky(string s, int k) {
        int temp=0;
        for(auto k:s){
            int x=k-'a'+1;
            while(x){
               temp+=(x%10);
                x/=10;
            }
        }
        k--;        
        while(k--){
            int x=0;
            while(temp){
                x+=(temp%10);
                temp/=10;
            }
            temp=x;
        }
        return temp;
    }
};
