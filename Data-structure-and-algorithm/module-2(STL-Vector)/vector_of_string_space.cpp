#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<string>v(n);
    for(int i=0;i<n;i++){
        getline(cin,v[i]);
    }
    // for(auto it=v.begin();it<v.end();it++){
    //     cout<<*it<<endl;
    // }
    for(string val:v){
        cout<<val<<endl;
    }
    return 0;
}