#include<bits/stdc++.h> 
using namespace std;
int main(){
    string s;
    cin>>s;
    //accessing any element
    cout<<s[2]<<endl;
    cout<<s.at(2)<<endl;


    //accessing last element
    cout<<s[s.size()-1]<<endl;
    cout<<s.back()<<endl;

    //accessing first element
    cout<<s[0]<<endl;
    cout<<s.front()<<endl;
    return 0;
}