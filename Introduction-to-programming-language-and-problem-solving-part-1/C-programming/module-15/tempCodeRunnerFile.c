#include<stdio.h>
void fun(int *ar,int n){
    ar[1] = 5; //main array in main function will be changed. call by reference.
}
void ffun(char *ar){
    ar[0] = 'g'; //main string in main function will be changed.call by reference.
}
int main(){
    int ar[5] = {1,2,3,4,5};
    printf("%d\n",ar[1]);
    fun(ar,5);
    printf("%d\n",ar[4]);


    char arr[6] = "hello";
    ffun(arr);
    printf("%s",arr);

    return 0;
}