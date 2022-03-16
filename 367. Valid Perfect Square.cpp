class Solution {
public:
    bool isPerfectSquare(int num) {
       float ans=sqrt(num);
           if(floor(ans)*floor(ans)==num){
               return true;
           }
        return false;
    }
};
