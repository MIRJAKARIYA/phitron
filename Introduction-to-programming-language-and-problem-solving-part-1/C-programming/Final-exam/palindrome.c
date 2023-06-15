#include<stdio.h>
void boo(int ar[],int size){
    ar[1] = 100;
}
int main(){
    int arr[5] ={1,2,3,4,5};
    boo(arr,5);
    return 0;
}