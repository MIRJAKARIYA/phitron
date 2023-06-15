#include<stdio.h>
int main(){
    int x=10;
    // printf("%p\n",&x);
    int *p=&x;
    printf("%p\n",p);
    //derefference
    printf("%d\n",*p); //printing value
    *p=500; //changing value
    printf("%d\n",x);
    return 0;
}