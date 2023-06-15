#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int k;
        string mainString;
        string rep;
        cin >> mainString >> rep;
        while ((k = mainString.find(rep)) != string::npos)
        {
            mainString.replace(k, rep.length(), "$");
  
        }
        cout<<mainString<<endl;
    }
    return 0;
}