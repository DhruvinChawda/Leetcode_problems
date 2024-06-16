class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1); // initialize with [-1, -1]
        
        // Find the first occurrence
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == target) {
                ans[0] = i;
                break;
            }
        }
        
        // Find the last occurrence
        for(int i = nums.size() - 1; i >= 0; i--) {
            if(nums[i] == target) {
                ans[1] = i;
                break;
            }
        }
        
        return ans;
    }
};
