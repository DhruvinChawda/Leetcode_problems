// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int consub(vector<int>vec,int k){
    unordered_map<int,int>con;
    int sum=0;
    int rem;
    for(int i=0;i<vec.size();i++){
        sum=sum+vec[i];
        rem=sum%k;
        if(con.find(rem)!=con.end()){
            if(i - con[rem]>=2){
                return true;
            }
            else{
                con[rem] = i;
            }
        }
    }
    return false;
}
int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";
    vector<int>vec={23,4,2,7,1};
    int k=6;
    if(consub(vec,k)==0){
        cout<<"True";    
    }
    else{
        cout<<"False";
    }
    
    

    return 0;
}