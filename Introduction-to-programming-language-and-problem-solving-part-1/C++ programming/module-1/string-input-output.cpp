#include<iostream>
#include<string.h>
using namespace std;
int main(){
    // char s[100];
    char si[100];
    // cin>>s;
    // cout<<s;
    cin.getline(si,100); //takin space input.but it doesn't take enter
    cout<<si<<endl<<strlen(si);

    return 0;
} 