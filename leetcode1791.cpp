class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int ans;
        unordered_map<int,int>elecount;
        int numOfSubsets = edges.size();
    
        for (const auto& subset : edges) {
        
            unordered_map<int, bool> tempSet;
            for (int element : subset) {
                if (!tempSet[element]) {
                    elecount[element]++;
                    tempSet[element] = true;
                }
            }
        }

        for (const auto& pair : elecount) {
            if (pair.second == numOfSubsets) {
                ans = pair.first;
                //return pair.first;
                break;
               
            }
        }
        return ans;
    }
    };