#include<bits/stdc++.h> 

using namespace std;

void sum(int x,int n){
    int summation= 0;
    for(int i=2;i<=n;i=i+2){
        // int squared=1;
        // for(int j=0;j<i;j++){
        //     squared = squared*x;
        // }
        // summation+=squared;
        float squared = pow((x*1.0),(i*1.0));
        summation+=squared;
    }
    cout<<summation;
}
 
int main(){
    int x,n;
    cin>>x>>n;
    sum(x,n);
    

    return 0;
}