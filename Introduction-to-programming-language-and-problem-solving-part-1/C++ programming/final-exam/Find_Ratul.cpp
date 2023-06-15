#include<bits/stdc++.h> 
using namespace std;
int main(){
    bool isRatul = false;
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    while(ss>>word){
        if(word == "Ratul"){
            isRatul = true;
            break;
        }
    }
    if(isRatul == true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}