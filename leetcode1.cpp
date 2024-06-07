#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

pair<int,int> twosum(vector<int>nums,int target){
    unordered_map<int,int>numMap;
    int n=nums.size();
    for(int i=0;i<n;i++){
        numMap[nums[i]] = i;
    }
    for(int i=0;i<n;i++){
        int rem = target - nums[i];
        if(numMap.count(rem) && numMap[rem]!=i){
            return{i,numMap[rem]};
        }
    }
    return {-1,-1};
}

int main() {
    // vector<int>vec={2,7,11,15};
    // cout<<twosum(vec,9);
    vector<int> vec = {4,3,2};
    pair<int, int> result = twosum(vec, 6);
    cout << "Indices: " << result.first << ", " << result.second << endl;
    return 0;
}