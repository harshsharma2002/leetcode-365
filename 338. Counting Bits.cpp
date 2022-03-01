class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        int count=0,rem;
        for(int i=0;i<=n;i++){
            count=0;
            int a=i;
            while(a){
                rem=a&1;
                if(rem==1)
                    count++;
                a=a>>1;
            }
            v.push_back(count);
        }
        return v;
    }
};
