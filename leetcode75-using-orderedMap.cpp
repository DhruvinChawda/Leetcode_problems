#include <iostream>
#include <vector>
#include<map>
using namespace std;

int main() {
   
    vector<int>vec={2,0,2,1,1,0};
    vector<int>ans;
    vector<int>ref={0,1,2};
    map<int,int>mp;
    for(int i=0;i<vec.size();i++){
        mp[vec[i]]++;
    }
    cout<<"map ";
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }
    
    for(int i=0;i<ref.size();i++){
        for(int j=0;j<mp[ref[i]];j++){
            ans.push_back(ref[i]);
        }
    }
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
    
    
    
    return 0;
}