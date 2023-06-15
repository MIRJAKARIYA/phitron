#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int j = 0; j < test; j++)
    {
        int n;
        cin >> n;
        if(n%2 != 0){
            cout<<-1<<endl;
            return 0;
        }
        int arr[n];
        int oddCount = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                oddCount++;
            }
        }
        cout << abs(oddCount - n / 2)<<endl;
    }

    return 0;
}