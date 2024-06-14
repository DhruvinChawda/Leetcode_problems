class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        // unordered_map<int,int>mp;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]] = i;
        // }
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>=nums[i]){
              cnt = cnt + nums[i-1] - nums[i] + 1;  
              nums[i] = nums[i-1]+1; 
            }
        }
       
        return cnt;
    }
};