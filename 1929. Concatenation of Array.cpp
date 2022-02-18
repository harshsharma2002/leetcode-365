class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size=nums.size();
        for(int i=0;i<size;i++){
            int a=nums[i];
            nums.push_back(a);
        }
        return nums;
    }
};
