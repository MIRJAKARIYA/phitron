#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "X";
        return 0;
    }
    int middle = n / 2+1;
    int outer_space = 0;
    int inner_space = n - 2;
    for (int i = 1; i <= n; i++)
    {
        if (i < middle)
        {
            for (int j = 1; j <= outer_space; j++)
            {
                cout << " ";
            }
            cout << "\\";
            for (int j = 1; j <= inner_space; j++)
            {
                cout << " ";
            }
            cout << "/" << endl;
            inner_space -= 2;
            outer_space++;
        }
        if(i==middle){
            for (int j = 1; j <= outer_space; j++)
            {
                cout << " ";
            }
            cout<<"X"<<endl;
            outer_space = middle-2;
            inner_space= 1;
        }
        if(i>middle){
            for (int j = 1; j <= outer_space; j++)
            {
                cout << " ";
            }
            cout << "/";
            for (int j = 1; j <= inner_space; j++)
            {
                cout << " ";
            }
            cout << "\\" << endl;
            inner_space += 2;
            outer_space--;
        }
  
        }

        return 0;
    }