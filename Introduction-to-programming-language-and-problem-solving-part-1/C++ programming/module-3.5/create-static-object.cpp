#include<bits/stdc++.h> 
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(char *n,int r,int s,int mm,int c){
        strcpy(name,n);
        roll=r;
        section=s;
        math_marks=mm;
        cls=c;
    }
};
int main(){
     char name1[100]="Rahim Uddin";
    Student Rahim(name1,5,'A',55,7);
    char name2[100]="Karim Uddin";
    Student Kahim(name2,9,'A',600,7);
    char name3[100]="Raihan Uddin";
    Student Raihan(name3,1,'A',90,9);
    int max1 = max(Rahim.math_marks,Kahim.math_marks);
    int max2=max(max1,Raihan.math_marks);
    if(max2 == Rahim.math_marks){
        cout<<"Rahim";
    }
    else if(max2 == Kahim.math_marks){
        cout<<"Karim";
    }
    else{
        cout<<"Raihan";
    }
   

    return 0;
}