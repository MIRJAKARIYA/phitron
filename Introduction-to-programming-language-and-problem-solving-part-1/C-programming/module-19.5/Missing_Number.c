#include<stdio.h>
int main(){
    int testCases;
    scanf("%d",&testCases);
    for(int i=0;i<testCases;i++){
       long long int sum,num1,num2,num3;
        scanf("%lld %lld %lld %lld",&sum,&num1,&num2,&num3);
       long long int missingNumber= sum-(num1+num2+num3);
        printf("%lld\n",missingNumber);
    }
    return 0;
}