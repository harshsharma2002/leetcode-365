class Solution {
public:
    static bool s(const int &a,const int &b){
        int n=a;
        int c=0;
        while(n>0){
            int rem=n%2;
            if(rem==1){
                c++;
            }
            n/=2;
        }
        n=b;
        int c1=0;
        while(n>0){
            int rem=n%2;
            if(rem==1){
                c1++;
            }
            n/=2;
        }
        if(c!=c1)
            return c<c1;
        return a<b;
    }
    vector<int> sortByBits(vector<int>& arr) {
       sort(arr.begin(),arr.end(),s);
        return arr;
    }
};
