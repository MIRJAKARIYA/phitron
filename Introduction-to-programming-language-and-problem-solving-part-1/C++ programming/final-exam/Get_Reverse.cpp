#include<bits/stdc++.h> 
using namespace std;
class Student{
    public:
        string name;
        int cls;
        char section;
        int marks;
        int engMarks;
};
int main(){
    int n;
    cin>>n;
    Student arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].name>>arr[i].cls>>arr[i].section>>arr[i].marks>>arr[i].engMarks;
    }


    for(int i=n-1;i>=0;i--){
        cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].section<<" "<<arr[i].marks<<" "<<arr[i].engMarks<<endl;
    }


    return 0;
}