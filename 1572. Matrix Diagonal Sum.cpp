class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size()-1;
        int sum=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size();j++){
                if(i==j){
                    sum+=mat[i][j];
                }
                else if(i+j==n){
                    sum+=mat[i][j];
                }
            }
        }
        return sum;
    }
};
