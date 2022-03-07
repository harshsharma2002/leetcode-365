class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int n=min(word1.length(),word2.length());
        int i=0;
        for(i=0;i<n;i++){
            ans+=word1[i];
            ans+=word2[i];
        }
        if(word1.length()>word2.length()){
          while(i<word1.length()){
              ans+=word1[i];
              i++;
          }
        }
        else{
            while(i<word2.length()){
                ans+=word2[i];
                i++;
            }
        }
        return ans;
    }
};
