class Solution {
public:
    int maximumDifference(vector<int>& nums) {
	int maxdiff = 0;
	for(int i=1, minval=nums[0]; i < nums.size(); ++i) {
		maxdiff = max(maxdiff, nums[i]-minval);
		minval = min(minval, nums[i]);
	}
	return maxdiff?maxdiff:-1;
}
};
