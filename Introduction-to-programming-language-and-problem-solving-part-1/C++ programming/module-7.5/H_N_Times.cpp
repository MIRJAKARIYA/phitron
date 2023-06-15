#include<bits/stdc++.h> 
using namespace std;
void print(int count, char c){
    string s(count,c);
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int num;
        char c;
        cin>>num;
        getchar();
        cin>>c;
        print(num,c);
    }
    return 0;
}