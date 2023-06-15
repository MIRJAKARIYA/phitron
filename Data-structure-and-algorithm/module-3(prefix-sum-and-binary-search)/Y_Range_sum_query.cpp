#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(q--){ //O(q)
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int sum=0;
        for(int i=l;i<=r;i++){ //O(n)
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    //total complexity O(nq) ==> 10^5 * 10^5 = 10^10. but here time limit 1.5 second means 1.5*10^7.and because of this TLE will occur
    return 0;
}