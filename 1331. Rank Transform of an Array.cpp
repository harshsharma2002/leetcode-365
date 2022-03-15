class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        set<int> s1(arr.begin(),arr.end());
        vector<int> ans;
    	
        vector<int> vv(s1.begin(),s1.end());

    	for(int i=0;i<arr.size();i++)
    	{
    		int l_b = lower_bound(vv.begin(), vv.end(), arr[i])- vv.begin();
            ans.push_back(l_b+1);
    	}

        return ans;
    }
};
