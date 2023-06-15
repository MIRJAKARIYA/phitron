#include<bits/stdc++.h> 
using namespace std;
int main(){
    string s;
    cin>>s;

    vector<int>arr(26,0);
    for(int i=0;i<s.size();i++){
        arr[s[i]-'a']++;
    }
    for(int i=0;i<arr.size();i++){
        char l='a'+i;
        if(arr[i] !=0){
            cout<<l<<" : "<<arr[i]<<endl;
        }
    }
    return 0;
}