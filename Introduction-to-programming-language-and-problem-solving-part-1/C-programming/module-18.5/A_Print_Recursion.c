#include<stdio.h>
void fun(int i){
    if(i>3)return;
    printf("I love Recursion\n");
    fun(i+1);
}
int main(){
    fun(1);
    return 0;
}