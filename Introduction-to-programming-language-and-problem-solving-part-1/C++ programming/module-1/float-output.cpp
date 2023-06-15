#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a;
    cin >> a;
    // printf("%0.2f",a);
    cout << fixed << setprecision(2) << a<<endl;
    cout<<fixed<<setprecision(3)<<a;

    return 0;
}