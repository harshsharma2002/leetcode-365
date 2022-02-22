class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.length();
        int i=0,j=n-1;
        while(i<j){
            if((s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')&&(s[j]>='A'&&s[j]<='Z'||s[j]>='a'&&s[j]<='z')){
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;
                j--; 
            }
            else if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'){
                j--;
            }
            else if(s[j]>='A'&&s[j]<='Z'||s[j]>='a'&&s[j]<='z'){
                i++;
            }
            else{
               i++,j--;
            }
        }
        return s;
    }
};
