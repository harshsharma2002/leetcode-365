class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long sum=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                return 0;
            }
            else if(nums[i]>0){
                nums[i]=1;
            }
            else{
                nums[i]=-1;
            }
            sum*=nums[i];
        }
        if(sum<0)
            return -1;
        if(sum>0)
            return 1;
        return 0;
    }
};
