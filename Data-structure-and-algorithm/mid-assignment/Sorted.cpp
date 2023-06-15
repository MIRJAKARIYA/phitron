#include<bits/stdc++.h> 
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){ //O(test)
        int n;
        cin>>n;
        int arr[n];
        int sorted[n];
        for(int i=0;i<n;i++){ //O(n)
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){ //O(n)
            sorted[i] = arr[i];
        }
        sort(sorted,sorted+n); //O(nlog(n))
        bool flag = true;
        for(int i=0;i<n;i++){ //o(n)
            if(arr[i] != sorted[i]){
                flag = false;
                break;
            }
        }
        if(flag == false){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}