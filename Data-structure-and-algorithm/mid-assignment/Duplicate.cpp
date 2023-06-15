#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){ 
        cin>>v[i];
    }
    sort(v,v+n);
    bool flag =false;
    for(int i=0;i<n-1;i++){ 
        int l=i+1;
        int r=n-1;
        // cout<<v[i]<<endl;
        while(l<=r){ 
            int mid = (l+r)/2;

            if(v[mid]==v[i]){
                flag = true;
                break;
            }
            if(v[i]>v[mid]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        
    }
    if(flag == false) cout<<"NO";
    else cout<<"YES";

    return 0;
}