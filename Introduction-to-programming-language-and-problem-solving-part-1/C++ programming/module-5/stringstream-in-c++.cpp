#include<bits/stdc++.h> 
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s); //word wise vag kore felbe s string ke

    //nicer syntax eo lekha jai
    //stringstream ss;
    //ss<<s;
    
    string word;
    ss>>word; // ss theke ekta word ekhane word string variable a jabe ebong ss thekeo remove hoiye jabe
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;

    // ss>>word;
    // cout<<word<<endl;

    // ss>>word;
    // cout<<word<<endl;

    // ss>>word;
    // cout<<word<<endl;
    int count=0;

    while(ss >> word){
        cout<<word<<endl;
        count++;
    }
    cout<<count<<endl;
    return 0;
}