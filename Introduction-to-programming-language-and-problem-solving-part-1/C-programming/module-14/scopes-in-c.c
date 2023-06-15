#include<stdio.h>
int x =500; //shob jaiga theke access kora jabe
void fun(void){
    // printf("%d",s); cannot be accessed
    int s = 100;
    printf("Fun er s er address - %p\n",&s);
     printf("X er address - %p",&x);
    printf("%d",x); //access hobe
}

int main(){
    int s=100;
    printf("%d",x); //access hobe
    printf("Main er s er address - %p",&s);
    printf("X er address - %p",&x);
    fun();
    // printf("%d",a); cannot be accessed
    return 0;
}