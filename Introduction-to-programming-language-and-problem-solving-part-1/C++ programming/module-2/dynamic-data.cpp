#include<bits/stdc++.h> 
using namespace std;
int main(){
    int *a= new int;//syntax of creating dynamic memory
    *a=10;
    cout<<*a<<endl;

    float *f=new float;
    *f=2.45;
    cout<<*f<<endl;
    delete f;
    

    return 0;
}