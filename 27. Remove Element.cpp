#include<vector>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int a=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                a++;
                nums[i]=-1;
            }
        }
        sort(nums.begin(),nums.end());
        nums.erase(nums.begin(),nums.begin()+a);
        return nums.size();
    }
};
