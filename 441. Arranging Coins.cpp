class Solution {
public:
    int arrangeCoins(int n) {
        long int sum = 0, i = 0;
        while(n-sum>=0)
        {
            i++;
            sum = i*(i+1)/2;
        }
        return i-1;
    }
};
