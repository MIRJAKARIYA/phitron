#include<stdio.h>
long long int fun(int num){
    if(num==1)return 1;
    long long int fac = num * fun(num-1);

    return fac;

}
int main(){
    int num;
    scanf("%d",&num);
    long long int fac = fun(num);
    printf("%lld",fac);
    return 0;
}