class Solution {
public:
    int hammingWeight(uint32_t n) {
        int rem=0,count=0;
        while(n){
            rem=n&1;
            if(rem==1)
                count++;
            n=n>>1;
        }
        return count;
    }
};
