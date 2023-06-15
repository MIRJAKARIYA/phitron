#include<bits/stdc++.h> 
using namespace std;
void print(vector<int>&arr1,vector<int>&arr2){
    vector<int> arr3;
    arr3=arr2;
    for(int i=0;i<arr1.size();i++){
        arr3.push_back(arr1[i]);
    }
    for(int i=0;i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr1(n);
    vector<int>arr2(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    print(arr1,arr2);


    return 0;
}