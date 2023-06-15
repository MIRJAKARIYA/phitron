#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;

    cin >> test;

    for (int i = 0; i < test; i++)
    {
        string s;
        cin >> s;

        int sum1 = 0;
        int sum2 = 0;
        int j=0;
        for (char c : s)
        {
            if(j<3){
                sum1 = sum1+ (c-42);
            }
            else{
                sum2=sum2+(c-42);
            }
            j++;
        }
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}