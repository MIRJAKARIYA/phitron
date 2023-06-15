#include<bits/stdc++.h> 
using namespace std;
class Student{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
        Student(int r,char s,int c,char* n){
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};
int main(){
    Student Rahim(29,'A',7,"Rahim Uddin");
    Student Karim(55,'D',7,"Karim Uddin");

    cout<<Rahim.roll<<endl;
    cout<<Rahim.section<<endl;
    cout<<Rahim.cls<<endl;
    cout<<Rahim.name<<endl;

    cout<<Karim.roll<<endl;
    cout<<Karim.section<<endl;
    cout<<Karim.cls<<endl;
    cout<<Karim.name<<endl;

    return 0;
}