#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    int i;
    long long int sum=0;
    for(i=0;i<=number;i++){
        sum+=i;
    }
    printf("%d",sum);


    return 0;
}