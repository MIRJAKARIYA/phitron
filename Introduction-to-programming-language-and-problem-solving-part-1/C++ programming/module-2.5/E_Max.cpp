#include<bits/stdc++.h> 
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int maximum=arr[0];
    for(int i=0;i<a;i++){
         maximum=max(maximum,arr[i]);
    }
    cout<<maximum;
    return 0;
}