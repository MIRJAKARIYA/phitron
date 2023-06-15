#include<stdio.h>

int sum(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s;
}

int main(){
    int res = sum();
    printf("%d",res);
    return 0;
}