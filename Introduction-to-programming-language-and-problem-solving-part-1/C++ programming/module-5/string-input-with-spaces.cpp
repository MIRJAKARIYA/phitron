#include<bits/stdc++.h> 
using namespace std;
int main(){
    
    // string s;
    // cin>>s;
    // cin.getline(s,100);//will not work here because our string here is dynamic string which doesn't have any size.it will work with only this type of strings char s[100]

    // getline(cin,s);//this will work perfectly with dynamic array.
    // cout<<s<<endl;
    // cout<<s.size()<<endl;

    //jhamela :
    //prothome kono integer niya tarpor enter dia abar string nile output e getline use korar karone string output a kono value dekhabe na karo getline sheshe deoa kono enter nibe na kinto 
    // prothome thakle niya nei.


    // int x;
    // cin>>x;
    // string s;
    // getline(cin,s);
    // cout<<x<<endl;
    // cout<<s<<endl;

    // to solve this
    int x;
    char c;
    cin>>x;
    cin.ignore(); //will ignore the enter input after integer input.
    //kono kono compiler jemon C er khetre e cin.ignore() kaj korbe na tai getchar() use kore same kajti kore fela jai.
    // getchar();
    string s;
    getline(cin,s);
    cout<<x<<endl;
    cout<<s<<endl;

    return 0;
}