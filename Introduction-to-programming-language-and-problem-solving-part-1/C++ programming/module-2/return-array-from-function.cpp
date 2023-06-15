#include<bits/stdc++.h> 
using namespace std;
int* fun(){
    int *a=new int[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    return a;
}
int main(){
    int *a=fun();
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    delete[] a;

    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<a; //memory address wil be there in the stack memory but there will be no value according to that address in the heap memory.
    return 0;
}