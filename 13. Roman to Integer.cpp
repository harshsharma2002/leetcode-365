class Solution {
public:
    
    int getNumber(char s)
{
    if(s == 'I') return 1;
    else if(s == 'V') return 5;
    else if(s == 'X') return 10;
    else if(s == 'L') return 50;
    else if(s == 'C') return 100;
    else if(s == 'D') return 500;
    else if(s == 'M') return 1000;
    else return 0;
}
    
    int romanToInt(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            int n=getNumber(s[i]);
            if(i< s.length()-1)
            {
                if((s[i] == 'I' && (s[i+1]=='V' || s[i+1]=='X')) ||
                   s[i] =='X' && (s[i+1]=='L' || s[i+1] == 'C') ||
                   s[i] =='C' && (s[i+1]=='D' || s[i+1] == 'M'))
                {
                    n=(getNumber(s[i+1])-n);
                    i++;
                }
            }
            sum+=n;
        }
        
        return sum;
    }
};
