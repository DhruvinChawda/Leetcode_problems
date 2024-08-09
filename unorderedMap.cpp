#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    
    unordered_map<string,int>r;
    r["raju"] = 1;
    r["kaju"] = 2;
    r["maju"] = 3;
    r["haju"] = 4;
    
    for(auto x:r){
        cout<<x.first<<endl<<" "<<x.second<<endl;
    }

    for(auto itr=r.begin();itr!=r.end();itr++){
        cout<<itr->second<<" ";
    }

    
}