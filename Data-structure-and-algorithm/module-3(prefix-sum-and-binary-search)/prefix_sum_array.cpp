#include<bits/stdc++.h> 
using namespace std;
int main(){
    long long int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){ //O(n)
        cin>>a[i];
    }
    long long int pre[n];
    pre[0]=a[0];
    for(int i=1;i<n;i++){ //O(n)
        pre[i] = a[i] + pre[i-1];
    }
    while(q--){ //O(q)
       long long int l,r;
        cin>>l>>r;
        l--;
        r--;
        long long int sum=0;
        if(l==0){
            sum=pre[r];
        }
        else{
           sum = pre[r] - pre[l-1]; 
        }
        
        cout<<sum<<endl;
    }
    return 0;

    //overall complexity O(n+q) ==> doitar moddhe maximum ta hobe time complexity.
    //ekhane n = 10^5 ebong q=10^5 tai O(n+q) = O(10^5) < 1 second.
}