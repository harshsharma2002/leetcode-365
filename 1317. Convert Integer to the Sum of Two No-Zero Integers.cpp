class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> v;
        bool flag=true;
        int i=1,j=n-1;
            while(i<=j){
                flag=true;
                int num=i,rem;
                while(num>0){
                    rem=num%10;
                    if(rem==0){
                        flag=false;
                        break;
                    }
                    else
                        num/=10;
                }
                num=j;
                while(num>0){
                    rem=num%10;
                    if(rem==0){
                        flag=false;
                        break;
                    }
                    else
                        num/=10;
                }
                if(flag){
                    v.push_back(i);
                    v.push_back(j);
                        return v;
                }
                i++;
                j--;
        }
        return v;
    }
};
