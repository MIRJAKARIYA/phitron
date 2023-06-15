#include<stdio.h>
int main()
{
    int number;
    int firstDigit,secondDigit;
    scanf("%d",&number);
    secondDigit = number % 10;
    firstDigit = number / 10;
    if(firstDigit % secondDigit == 0 || secondDigit %firstDigit == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}