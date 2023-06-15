#include<bits/stdc++.h> 
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int space = 0;
    while(ss>>word){
        if(space !=0){
            cout<<" ";
        }
        reverse(word.begin(),word.end());
        cout<<word;
        space++;
    }

    return 0;
}