class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0,c=0;;
        for(int i=0;i<nums.size();i++){
            while(nums[i]){
                int rem=nums[i]%10;
                count++;
                nums[i]/=10;
            }
            if(count%2==0)
                c++;
            count=0;
        }
        return c;
    }
};
