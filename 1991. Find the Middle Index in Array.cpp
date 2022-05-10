class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int l=0,r=0;
        r=accumulate(nums.begin()+1,nums.end(),0);
        if(r==0)
            return 0;
        for(int i=1;i<nums.size();i++){
            l+=nums[i-1];
            r-=nums[i];
            if(l==r)
                return i;
        }
        return -1;
    }
};
