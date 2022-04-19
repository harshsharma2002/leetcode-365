class Solution {
public:
    
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        while(original <= nums[n-1]){
            int temp = original;
            if(binary_search(nums.begin(), nums.end(), original)) original *= 2;
            if(temp == original) break;
        }
        return original;
    }
};
