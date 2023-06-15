#include<bits/stdc++.h> 
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){


        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int endminimum=INT_MAX;
        for(int k=0;k<n-1;k++){
            for(int l=k+1;l<n;l++){
                int minimum =  arr[k]+arr[l]+l-k;
                int min1 = min(minimum,endminimum);
                if(min1<endminimum){
                    endminimum = min1;
                }
            }
        }
        cout<<endminimum;




    }
    return 0;
}