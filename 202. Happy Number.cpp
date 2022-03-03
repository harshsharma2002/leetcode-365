class Solution {
public:
    bool isHappy(int n) {
        int rem=0,sumofsqar=0,i=0;
        while(i<10){
            sumofsqar=0;
            while(n>0){
                rem=n%10;
                sumofsqar+=(rem*rem);
                n/=10;
            }
            n=sumofsqar;
            if(n==1){
                return true;
            }
            i++;
        }
        return false;
    }
};
