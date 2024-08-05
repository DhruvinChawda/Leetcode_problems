class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string>vec;
        unordered_map<string,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==1){
                vec.push_back(arr[i]);
                mp[arr[i]]--;
            }
        }
        if(k>vec.size()){
            return "";
        }
        else{
            return vec[k-1];
        }
    }
};