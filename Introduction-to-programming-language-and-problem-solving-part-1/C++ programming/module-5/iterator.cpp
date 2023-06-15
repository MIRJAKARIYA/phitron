#include<bits/stdc++.h> 
using namespace std;
int main(){
    string s;
    cin>>s;
    // for(int i=0;i<s.size();i++){
    //     cout<<s[i]<<endl;
    // }

    //s.begin() is the pointer of the element of the first index but it is private. we cannot print s.begin()

    //*s.begin() ==> dereference of that pointer
    cout<<*s.begin()<<endl;
    //s.end() is the pointer of the next element of the last element.it is also private.we cannot print s.end().
    cout<<*s.end()<<endl;
    cout<<*(s.end()-1)<<endl; //last element by dereferencing
    
    //defining iterator which will iterate through the string using pointer.
    // string::iterator it;
    
    // for(string::iterator it=s.begin();it<s.end();it++){
    //     cout<<*it<<endl;
    // }

    //auto here automatically detects if the variable is iterator and whose iterator it is. but g++11 compiler a eta kaj korbe na.minimum g++14 ba g++17 compiler use korte hobe.
    for(auto it=s.begin();it<s.end();it++){
        cout<<*it<<endl;
    }


    return 0;
}