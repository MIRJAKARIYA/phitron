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
    //dynamic object amra chaile memory theke delete korte pari
    char name[100]="Rahim Uddin";
    // Student Rahim(29,'A',7,name); //static object
    //without constructor
    // Student* Rahim = new Student;

    //with constructor
    Student* Rahim = new Student(5,'A',11,name);
    // (*Rahim).roll=55;
    Rahim->roll=55;
    // int *a=new int;
    // *a=10;
    // cout<<*a<<endl;

    // cout<<(*Rahim).roll<<endl;
    // cout<<(*Rahim).name<<endl;
    // cout<<(*Rahim).cls<<endl;

    //shortcut opai
    //(*Rahim). = Rahim->
    cout<<Rahim->name<<endl;
    cout<<Rahim->cls<<endl;
    cout<<Rahim->section<<endl;
    cout<<Rahim->roll<<endl;

    //delete an object
    delete Rahim;

    cout<<Rahim->name<<endl;
    cout<<Rahim->cls<<endl;
    cout<<Rahim->section<<endl;
    cout<<Rahim->roll<<endl;

    return 0;
}