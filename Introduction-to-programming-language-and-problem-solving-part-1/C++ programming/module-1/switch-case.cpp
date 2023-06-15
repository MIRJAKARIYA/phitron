#include<iostream>
using namespace std;
int main(){
    // int a;
    // cin>>a;
    // switch(a){
    //     case 1:
    //         cout<< 1;
    //         break;
    //     case 2:
    //         cout<<2;
    //         break;
    //     case 3:
    //         cout<<3;
    //         break;
    //     case 4:
    //         cout<<4;
    //         break;
    //     case 5:
    //         cout<<5;
    //         break;
    //     default:
    //         cout<<"Greater than 5";
    // }

    // char a;
    // cin>>a;
    // switch(a){
    //     case 'a':
    //         cout<<"vowel";
    //         break;
    //     case 'e':
    //         cout<<"vowel";
    //         break;
    //     case 'i':
    //         cout<<"vowel";
    //         break;
    //     case 'o':
    //         cout<<"vowel";
    //         break;
    //     case 'u':
    //         cout<<"vowel";
    //         break;
    //     default:
    //         cout<<"consonant";
    // }

    int a;
    cin>>a;

    switch(a%2){
        case 0:
            cout<<"Even"<<endl;
            break;
        default:
            cout<<"Odd"<<endl;
    }

    return 0;
}