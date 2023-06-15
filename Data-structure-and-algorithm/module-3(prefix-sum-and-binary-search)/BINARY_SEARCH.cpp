#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){ //O(n)
        cin>>a[i];
    }
    int x;
    cin>>x;
    int l=0;
    int r = n-1;
    bool flag = false;
    while(l<=r){ //O(logn)
        int mid_index = (l+r)/2;
        if(a[mid_index]==x){
            flag =true;
            break;
        }
        if(x>a[mid_index]){
            //dane jao
            l=mid_index+1;
        }
        else{
            //bame jao
            r= mid_index-1;
        }
    }
    if(flag == true) cout<< "Yes"<<endl;
    else cout<<"No"<<endl;

    //total complexity = O(n)+O(logn) ==> O(n)
    return 0;
}