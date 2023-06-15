#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){ 
        int digit = n%10;
        cout<<digit<<endl;
        n/=10; //O(logN)
    }

    for(int i=1;i<=n;i=i*2){ //O(logN)
        cout<<i<<endl;
    }
    return 0;
}

//O(logN) is way better than O(N)