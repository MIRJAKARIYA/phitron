#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int freq[26]={0};
    for(int i=0;i<n;i++){
        char a;
        cin>>a;
        freq[a-'a']++;
    }

    for(char i='a';i<='z';i++){
        if(freq[i-'a'] >0){
            string hello(freq[i-'a'],i);
            cout<<hello;
        }
    }
    return 0;
}