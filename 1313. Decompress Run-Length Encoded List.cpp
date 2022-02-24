class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i+=2){
            int freq = nums[i];
            int val = nums[i+1];
            while(freq>0){
                v.push_back(val);
                freq--;
            }
        }
        return v;
    }
};
