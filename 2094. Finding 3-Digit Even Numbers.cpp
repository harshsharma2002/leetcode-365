class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> v(digits);
        vector<int> ans;
        set<int> s;
        int n=digits.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(v[i]!=0 && i!=j && i!=k && j!=k){
                    int a=v[i]*100+v[j]*10+v[k];
                    if(a%2==0)
                        s.insert(a);
                    }
                }
            }
        }
        set<int> ::iterator itr;
        for(auto i:s){
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
