#include<bits/stdc++.h> 
using namespace std;
class Cricketer
{
    public:
	    int jersey_no;
	    char country[100];
};
int main(){
    Cricketer* Sakib = new Cricketer;
    (*Sakib).jersey_no=27;
    char country1[100] = "Bangladesh";
    strcpy(Sakib->country,country1);

    Cricketer* Kohli = new Cricketer;
    Kohli->jersey_no = Sakib->jersey_no;
    strcpy(Kohli->country,Sakib->country);

    cout<<Kohli->country<<" "<<Kohli->jersey_no;

    return 0;
}