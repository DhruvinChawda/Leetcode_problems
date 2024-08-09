#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    auto x =69;
    cout<<x;
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    auto temp = s.find(30);
    cout<<*temp<<endl;
    if(s.count(20)){
        cout<<"Haa bhai hai";
    }
    else{
        cout<<"nahi hai bhai";
    }


}