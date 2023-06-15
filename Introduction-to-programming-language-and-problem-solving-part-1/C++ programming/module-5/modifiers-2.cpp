#include<bits/stdc++.h> 
using namespace std;
int main(){
    string a="Hello";
    //assigning value;
    a="Gelo"; //much easier
    cout<<a<<endl;
    a.assign("Jello");
    cout<<a<<endl;

    //deleting any element from a string
    //erase(start index,koita character delete korbe)
    string b="HelloWorld";
    // b.erase(4); // 4 index theke shoro kore porer shobgolo delete hoiye jabe
    // b.erase(4,1); // 4 number index theke shoro kore 1 ta element delete korbe
    b.erase(4,3);

    
    cout<<b<<endl;
    //replacing elements of any string
    //replace(starting index,koita element delete hobe,string which will be added)

    string o="JACK AND JONES";
    //  o.replace(9,0,"JILL");
    // cout<<o<<endl;
    o.replace(9,5,"JILL");
    cout<<o<<endl;
   
    //insert a portion to a specific position

    string k="HelloWorld";
    k.insert(5,"Rahat");
    // k.replace(5,0,"Rahat");
    cout<<k<<endl;

    return 0;
}