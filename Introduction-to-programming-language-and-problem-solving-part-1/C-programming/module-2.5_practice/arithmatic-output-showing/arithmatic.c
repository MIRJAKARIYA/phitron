#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    // float div = (float)a/b ;
    printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %0.2f",a,b,a+b,a,b,a-b,a,b,a*b,a,b,(float)a/b);

    return 0;
}