#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){ //O(n)
        cin>>a[i];
    }
    sort(a,a+n); //O(nlogn)
    while(q--){ //O(q)
        int x;
        cin>>x;
        bool flag=false;
        int l=0;
        int r=n-1;
        //binary search
        while(l<=r){ //O(logn)
            int mid = (l+r)/2;
            if(a[mid] ==x){
                flag = true;
                break;
            }
            if(x>a[mid]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        if(flag == true) cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }

    //total complexity = O(n)+nlog(n)+ O(qlog(n))
                    // = O(nlog(n))+O(qlog(n))
                    // = O(2nlog(n))   // as q = n = 10^5
                    // = O(nlog(n)) ==> 10^5 * log 10^5 ==> 1.6*10^6 which is less than 10^7 or one second.
    return 0;
}