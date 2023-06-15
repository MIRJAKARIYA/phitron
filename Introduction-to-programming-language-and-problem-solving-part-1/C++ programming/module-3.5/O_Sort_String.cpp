#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin>>n;
    char string[n+1];
    cin>>string;

    int freq[26]={0};
    for(int i=0;i<strlen(string);i++){
        freq[string[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            for(int j=0;j<freq[i];j++){
                int value = i+97;
                cout<<(char)value;
            }
        }
    }
    return 0;
}