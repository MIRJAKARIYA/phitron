#include<bits/stdc++.h> 
using namespace std;
int main(){
    // string s = "Hello world";
    // cout<<s.size()<<endl; //string size or length;
    // cout<<s.max_size()<<endl;// machine maximum koto size nite parbe ey string er jonno.online compiler generally 10^6 porjonto size dai.
    

    //capacity dynamically change hoi.beshi character thakle cpacity ebong size dynamically bere jai ebong vice versa.kinto capacity kokhonoi max_size er theke beshi hote parbe na.
    string a="lksdjlfksajdlfjalsdjflkjflksdjflaskdjflskjfdlsjdflksjdfslkdfjsld";
    cout<<a.capacity()<<endl;

    a="kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk";
    cout<<a.capacity()<<endl;
    cout<<a.size()<<endl;

    a="eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
    cout<<a.capacity()<<endl;
    cout<<a.size()<<endl;


    //clear() function is used to clear a string;
    string d = "Hello";
    cout<<d<<endl;
    d.clear();
    cout<<d<<endl;

    //empty() returns 1 (true) if the string is empty and returns 0 (false) if the string is not empty.
    string y="lkd";
    cout<<y.empty()<<endl;
    y.clear();
    if(y.empty()==true){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }

    //resize() function string er change kore felte pare.eyta string ke change kore fele.chale noton character add o kora jai.
    string z;
    cin>>z;
    z.resize(3);
    cout<<z.size()<<endl;
    cout<<z<<endl;
    // z.resize(8);
    z.resize(8,'X');//faka jaigagolote X boshe jabe
    cout<<z.size()<<endl;
    cout<<z<<endl;


    string i;
    cin>>i;
    cout<<i<<endl;
    i.resize(3);
    cout<<i<<endl;
    i.resize(8,'Z');
    cout<<i<<endl;




    return 0;
}