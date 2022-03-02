class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int maxx=0;
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<=nums.size()-3;i++){
         if (nums[i] + nums[i+1] > nums[i+2] && nums[i] + nums[i+2] > nums[i+1] && nums[i+1] + nums[i+2] > nums[i]){
             maxx=max(maxx,nums[i]+nums[i+1]+nums[i+2]);
         }
    }
        if(maxx>0)
            return maxx;
        else
            return 0;
    }
};
