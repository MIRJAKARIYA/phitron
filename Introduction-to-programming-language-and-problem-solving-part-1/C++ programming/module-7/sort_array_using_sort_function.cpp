#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};


bool cmp(Student a, Student b){
    if(a.marks < b.marks) return true; //for ascending order
    // if(a.marks > b.marks) return true; //for descending order
    else return false;
}


int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        getchar();
    }

    //sort function
    sort(a,a+3,cmp);

    for(int i=0;i<3;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}