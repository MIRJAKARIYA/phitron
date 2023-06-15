#include<bits/stdc++.h> 
using namespace std;
//namespace class er motoi ekta group but aro powerfull jetar under a variable,function,class shob e rakhte hoi.multiple namespace er vetorer jinishgolor name same hote parbe na.
namespace Rakib{
    int age = 24;
    void hello(){
        cout<<"Rakib namespace"<<endl;
    }
   
}
namespace Sakib{
    int age2 = 30;
    void hello2(){
        cout<<"Sakib namespace"<<endl;
    }
   
}
int main(){
    using namespace Rakib;
    using namespace Sakib;
    cout<<age<<endl;
    // cout<<Sakib::age2<<endl;
    cout<<age2<<endl;
    // Rakib::hello();
    hello();
    hello2();
    return 0;
}