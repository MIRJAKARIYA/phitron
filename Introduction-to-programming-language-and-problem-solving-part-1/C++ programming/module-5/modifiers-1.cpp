#include<bits/stdc++.h> 
using namespace std;
int main(){
    string a="Hello";
    string b="World";
    //string concatenation
    // a=a+b;
    // a+=b;
    // cout<<a;
    a.append(b);
    cout<<a<<endl;
    
    //add character to the last of a string;
    string z="JACKS";
    // z[5]='A'; //evabe korle hobe na karon memory expand hobe na.eyvabe tokhoni kora zabe zokhon 5 number index er jonno memory thakbe.
    cout<<z<<endl;

   
    
    // a="JACKSA"; --> works
    // a=a+"A"; -->works

     //push_back() function use korle memory expand hobe jekhane ekta character add kore dite parbe.

     z.push_back('A');
     cout<<z<<endl;

     //pop_back() fuction use kore string er last charater remove kore fela jai

     z.pop_back();
     cout<<z<<endl;
     z.pop_back();
     cout<<z<<endl;
     z.pop_back();
     cout<<z<<endl;
     z.pop_back();
     cout<<z<<endl;
     z.pop_back();
     cout<<z<<endl;
    


    

    return 0;
}