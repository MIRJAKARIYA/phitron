#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int *b = new int[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int *c=new int[m];
    for(int i=0;i<n;i++){
        c[i]=a[i];
    }
    for(int i=n;i<m;i++){
        c[i]=b[i-n];
    }
    for(int i=0;i<m;i++){
        cout<<c[i]<<" ";
    }
    delete[] a;
    delete[] b;
  
    return 0;
}