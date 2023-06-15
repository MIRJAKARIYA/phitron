#include<bits/stdc++.h> 
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;
};

int main(){
    int n;
    cin>>n;
    Student arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].name>>arr[i].roll>>arr[i].marks;
    }
    int i=0;
    int j=n-1;
    while(i!=j){
        Student temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
    }

    return 0;
}