#include<stdio.h>
int main()
{
    int test;
    int number;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&number);

        do{
            printf("%d ",number%10);
            number = number /10;
        }
        while(number !=0);
        
        printf("\n");
    }
    return 0;
}