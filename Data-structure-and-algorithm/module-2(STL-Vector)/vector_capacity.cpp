#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout<<v.max_size()<<endl;
    // cout<<v.capacity()<<endl; // 0
    // v.push_back(10);//size barano lagle barabe ebong noton element add kore dibe.
    // cout<<v.capacity()<<endl; // 1
    // v.push_back(20);
    // cout<<v.capacity()<<endl; // 2
    // v.push_back(30);
    // cout<<v.capacity()<<endl; // 4
    // v.push_back(40);
    // cout<<v.capacity()<<endl; // 4
    // v.push_back(50);
    // cout<<v.capacity()<<endl; // 8
    // capacity jokhon exceed korbe tokon capacity bere giye double hoiye jabe.

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    // v.clear(); //size clear ba zero kore fele kintu memory khali kore na.
    // cout<<v.size()<<endl;
    // for(int i=0;i<v.size();i++){ //wont give anything as the size became zero
    //     cout<<v[i]<<" ";
    // }
    // cout<<v[0]<<endl; //works because we are not using size here
    // cout<<v[4]<<endl; //works because we are not using size here
    v.resize(2); // it justs changes size but doesn't clear memory
    v.resize(7,100); // agee resize kore pore abar resize kore size barano hole joto barbe toto memory clear hobe ba noton kore add korle segolo ashbe.
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // cout<<v[4];

    

    return 0;
}