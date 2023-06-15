#include <bits/stdc++.h>
using namespace std;
int main()
{
    // first way

    // vector<int>v; //no size initially
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //    int x;
    //    cin>>x;
    //    v.push_back(x); //push_back() korle size increase hoi
    // }

    // 2nd way
    int n;
    cin >> n;
    vector<int> v(n); //size assigned
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}