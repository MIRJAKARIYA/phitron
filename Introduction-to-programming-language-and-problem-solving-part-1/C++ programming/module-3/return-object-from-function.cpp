#include<bits/stdc++.h> 
using namespace std;
class Car{
    public:
        int weight;
        int height;
        Car(int w,int h){
            weight = w;
            height = h;
        }
};
Car makeCar(){
    Car Lambo(500,5);
    return Lambo; //RVO ==> Return Value Optimization
}
int main(){
    Car Lambo=makeCar(); 
    cout<<Lambo.weight<<endl;
    cout<<Lambo.height<<endl;
    return 0;
}
