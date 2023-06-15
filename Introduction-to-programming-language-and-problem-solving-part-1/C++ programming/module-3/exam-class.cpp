#include<bits/stdc++.h> 
using namespace std;

class Person{
    public:
        char name[100];
        float height;
        int age;
        Person(char *n,float h,int a){
            height = h;
            age = a;
            strcpy(name,n);
        };
};

int main(){
    char name1[100] = "Mir Jakariya";
    Person *Jakariya = new Person(name1,5.10,26);
    char name2[100] ="Tayeb Hossain Rinko";
    Person *Rinko = new Person(name2,5.8,27);
    if(Jakariya->age>Rinko->age){
        cout<<Jakariya->name;
    }
    else if(Rinko->age>Jakariya->age){
        cout<<Rinko->name;
    }
    return 0;
}