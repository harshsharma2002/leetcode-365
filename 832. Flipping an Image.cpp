class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> v;
        vector<int> temp;
        for(int i=0;i<image.size();i++){
            for(int j=image.size()-1;j>=0;j--){
                if(image[i][j]==1){
                    temp.push_back(0);
                }
                else{
                    temp.push_back(1);
                }
            }
            v.push_back(temp);
            temp.clear();
        }
        return v;
    }
};
