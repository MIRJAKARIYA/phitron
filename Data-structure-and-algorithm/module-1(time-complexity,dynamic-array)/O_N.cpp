#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n; 
    cin>>n; 
    int a[n]; 
    for(int i=0;i<n;i++){ // --> n
        cin>>a[i];
    }
    int s=0;
    for(int i=0;i<n;i++){ // --> n
        s+=a[i];
    }
    cout<<s<<endl;



    // Time complexity O(n+n)
                // =>O(2n)
                // =>O(n)

    for(int i=0;i<n;i++){
        if(i%2==0){
            s+=a[i];
        }
    }

    // Time complexity O(n+n)
                // =>O(2n)
                // =>O(n)

    for(int i=0;i<n;i=i+2){
       
            s+=a[i];
        
    }
// Time complexity O(n+n/2)
                // =>O(n+n)
                // =>O(2n)
                // =>O(n)
    return 0;



}

