#include<bits/stdc++.h> 
using namespace std;
int main(){
    vector<int> x={10,20,30,40};
    // vector<int> v = {1,2,3};

    // v=x; //O(N)
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    x.pop_back(); //last e theke ekta delete korbe. O(1)
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }

    return 0;
}