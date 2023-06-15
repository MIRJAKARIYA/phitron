#include<stdio.h>
int main(){
    int x =100;
    printf("x er add - %p\n",&x);
    int *ptr = &x;
    // x=200;
    *ptr = 200; //x == *ptr
    // printf("ptr er value - %p\n",ptr);
    // printf("ptr er add - %p\n",&ptr);
    // printf("ptr er mem size - %d",sizeof(ptr));

    printf("x er value - %d\n",x);
    printf("x er value - %d",*ptr);

    return 0;
}