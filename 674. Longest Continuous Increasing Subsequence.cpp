class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int j=0;
        int ans=0;
        if(nums.size()==1) 
            return 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                j=i;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};
