class NumArray {
public:
    vector<int> v;
    NumArray(vector<int>& nums) {
        v=nums;
    }
    
    int sumRange(int left, int right) {
        int i=left;
        int sum=0;
        while(i<=right){
            sum+=v[i];
            i++;
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
