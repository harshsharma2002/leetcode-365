class Solution {
public:
    char findTheDifference(string s, string t) {
       int arr1[26]={0};
        for(int i=0;i<s.length();i++){
            int a=s[i]-'a';
            arr1[a]++;
        }
        int arr2[26]={0};
        for(int i=0;i<t.length();i++){
            int a=t[i]-'a';
            arr2[a]++;
        }
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i]){
                return (char)(i+'a');
            }
        }
        return '\0';
    }
};
