#include<stdio.h>
void fun(int *p){
    printf("fun er vetor x er add - %p\n",p);
    printf("fun er vetor x er value - %d\n",*p);
    *p = 20;

}
int main(){
    int x=10;
    printf("main er vetor x er add - %p\n",&x);
    fun(&x);
    printf("main er vetor x er value - %d",x);
    return 0;
}