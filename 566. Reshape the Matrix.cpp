class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int total=r*c;
        vector<vector<int>> v;
        vector<int> a;
        int count=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                a.push_back(mat[i][j]);
                count++;
            }
        }
        if(count!=total)
            return mat;
        else{
            count=0;
            vector<int> b;
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    int data=a[count++];
                    b.push_back(data);
                }
                v.push_back(b);
                b.clear();
            }
        }
        mat.clear();
        mat=v;
        return mat;
    }
};
