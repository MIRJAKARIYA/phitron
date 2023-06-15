#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    bool inside_word =false;
    int count=0;
    for(char c:s){
        if(isalpha(c)){
            if(inside_word ==false){
                count++;
                inside_word=true;
            }
        }
        else{
            inside_word=false;
        }
    }
    cout<<count<<endl;
    // cout<<isalpha('A')<<endl; //isalpha() returns 1 for uppercase letter,returns 2 for lowercase letter and returns 0 for characters which are not alphabets.
    return 0;
}