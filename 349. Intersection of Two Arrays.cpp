class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int,greater<int>> s1;
        set<int,greater<int>> s2;
        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            s2.insert(nums2[i]);
        }
        set<int,greater<int>>::iterator itr1;
        set<int,greater<int>>::iterator itr2;
        vector<int> v;
        for(itr1=s1.begin();itr1!=s1.end();itr1++){
            for(itr2=s2.begin();itr2!=s2.end();itr2++){
                if(*itr1==*itr2){
                    v.push_back(*itr1);
                }
            }
        }
        return v;
    }
};
