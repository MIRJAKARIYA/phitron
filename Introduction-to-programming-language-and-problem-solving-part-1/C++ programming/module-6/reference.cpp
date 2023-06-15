#include<bits/stdc++.h> 
using namespace std;
void print(string& s){ //here & is reference;
    s="world";
}
int main(){
    string s="hello";
    print(s);
    cout<<s<<endl;
    return 0;
}