class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            if(x.second==1)
                return x.first;
        }
        return 0;
    }
};
