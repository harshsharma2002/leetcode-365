class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double sum=0;
        int i;
        for(i=1;i<salary.size()-1;i++){
            sum+=salary[i];
        }
        return sum/(i-1);
    }
};
