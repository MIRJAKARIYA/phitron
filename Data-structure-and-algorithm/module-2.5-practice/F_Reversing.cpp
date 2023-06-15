#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int> arrRev(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        arrRev[arrRev.size()-1-i] = arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arrRev[i]<<" ";
    }
    return 0;
}