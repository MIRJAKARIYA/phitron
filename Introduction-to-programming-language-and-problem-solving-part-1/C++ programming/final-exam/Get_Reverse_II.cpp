#include<bits/stdc++.h> 
using namespace std;
class Student{
    public:
        string name;
        int cls;
        char section;
        int id;
};
int main(){
    int n;
    cin>>n;
    Student arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].name>>arr[i].cls>>arr[i].section>>arr[i].id;
    }
    
    int i=0;
    int j=n-1;
    while(i != j){
        cout<<arr[j].name<<endl;
        i++;
        j--;
    }

    // for(int i=0;i<n;i++){
    //     cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].section<<" "<<arr[i].id<<endl;
    // }

    return 0;
}