#include<bits/stdc++.h> 
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string search;
    cin>>search;
    stringstream ss(s);
    string word;
    int count=0;
    while(ss>>word){
        if(word==search){
            count++;
        }
    }
    cout<<count;
    return 0;
}