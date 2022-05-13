class Solution {
public:
   vector<int> distributeCandies(int candies, int num_people) {
        vector<int>v(num_people,0);
        int i=0,j=1;
        while (candies>0){
            if (j<candies){
                v[i]+=j;
                candies-=j;
                j++;
            } else {
                v[i] += candies;
                candies = 0;
            }
            i++;
            if (i==num_people) i =0;
            
        }
        return v;
    }
};
