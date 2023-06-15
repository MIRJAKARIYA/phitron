#include<bits/stdc++.h> 
using namespace std;
class Person{
    public:
        string name;
        int age;
        Person(string name,int age){
            this->name=name;
            this->age=age;
        }
};
int main(){
    Person* Rakib = new Person("Rakib Ahsan",25);
    Person* Sakib = new Person("Sakib Ahmed",23);
    // Rakib = Sakib; //here rakib points the pointer of the sakib
    // delete Sakib;
    // cout<<Rakib->name<<" "<<Rakib->age<<endl; //won't get anything as sakib is deleted.

    // // 1 
    // Rakib->name=Sakib->name; //dereference kore copy kora hoiyeche
    // Rakib->age=Sakib->age; //dereference kore copy kora hoiyeche

    // 2
    *Rakib = *Sakib; //dereference kore direc copy kora hoiyeche.
    delete Sakib;
    cout<<Rakib->name<<" "<<Rakib->age<<endl;
    return 0;
}