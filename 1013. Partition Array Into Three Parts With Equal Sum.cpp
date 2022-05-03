class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        if(sum%3!=0)
            return false;
        int temp=0;
        int c=0;
        for(int i=0;i<arr.size();i++){
            temp+=arr[i];
            if(sum/3==temp){
                c++;
                temp=0;
            }
        }
        if(c>=3)
            return true;
        return false;
    }
};
