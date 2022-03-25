class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length()==0&&needle.length()==0)
            return 0;
        return haystack.find(needle);
    }
};
