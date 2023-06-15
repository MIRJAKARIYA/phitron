#include<bits/stdc++.h> 
using namespace std;
class Person{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        Person(string nm,int ag,int m1,int m2){
            name = nm;
            age = ag;
            marks1 = m1;
            marks2 = m2;
        }
        int total_marks(){
            // cout<<"Hello";
            return marks1+marks2;
        }
};
int main(){
    Person Rakib("Rakib Ahsan",24,4,5);
    cout<<Rakib.total_marks();
    return 0;
}