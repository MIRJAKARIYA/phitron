#include<bits/stdc++.h> 
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int maximum1=max(a,b);
    int maximum2=max(maximum1,c);
    int minimum1=min(a,b);
    int minimum2=min(minimum1,c);
    cout<<minimum2<<" "<<maximum2;
    return 0;
}