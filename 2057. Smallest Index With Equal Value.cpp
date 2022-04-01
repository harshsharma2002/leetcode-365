class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int i;
        for(i=0;i<nums.size();i++){
            if(i%10==nums[i])
                break;
        }
        if(i==nums.size())
            return -1;
        return i;
    }
};
