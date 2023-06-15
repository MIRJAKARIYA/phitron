#include<bits/stdc++.h> 
using namespace std;
int main(){
    char value;
    cin>>value;
    if(value >= 48 && value<= 57){
        cout<<"IS DIGIT";
    }
    else if(value >= 65 && value<=122){
        cout<<"ALPHA"<<endl;
        if(value >=65 && value<=90){
            cout<<"IS CAPITAL";
        }
        else{
            cout<<"IS SMALL";
        }
    }
    
    return 0;
}