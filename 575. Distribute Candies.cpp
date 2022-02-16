class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int half = candyType.size()/2;
        int count=1;
        sort(candyType.begin(),candyType.end());
        for(int i=0;i<candyType.size()-1;i++){
            if(candyType[i]!=candyType[i+1]){
                count++;
            }
        }
        return min(count,half);
    }
};
