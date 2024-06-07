class Solution {
public:
    int strStr(string haystack, string needle) {
    int n = needle.size();
    int m = haystack.size();
    for(int i=0;i<haystack.size();i++){
        for(int j=0;j<needle.size();j++){
            if(needle[j]!=haystack[i+j]){
                break;
            }
            if(j==n-1){
                return i;
            }
        }
    }
    return -1;
    }
};