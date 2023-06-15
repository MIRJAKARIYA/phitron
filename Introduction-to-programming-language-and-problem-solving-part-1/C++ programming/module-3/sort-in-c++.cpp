#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //sorting ascending order
    sort(a,a+n); //sort(firts pointer(&a[0]==a),last er ghor)

    //sorting descending order
    sort(a,a+n,greater<int>()); //sort(first pointer,last er ghor,greater<array type>());

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}