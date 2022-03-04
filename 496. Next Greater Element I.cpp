class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        bool flag=true;
        int temp=INT_MAX;
        for(int i=0;i<nums1.size();i++){
            temp=INT_MAX;
            for(int j=0;j<nums2.size();j++){
                flag=true;
                if(nums1[i]==nums2[j]){
                    temp=j;
                }
                if(j>temp&&nums2[j]>nums1[i]){
                    v.push_back(nums2[j]);
                    flag=false;
                    break;
                }
            }
            if(flag)
                v.push_back(-1);
        }
        return v;
    }
};
