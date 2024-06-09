class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[n-1];
        vector<char>ans;
        for(int i=0;i<first.size();i++){
            if(first[i]!=last[i]){
                break;
            }
            ans.push_back(first[i]);
        } 
        string str(ans.begin(), ans.end());
        return str;
    }
};