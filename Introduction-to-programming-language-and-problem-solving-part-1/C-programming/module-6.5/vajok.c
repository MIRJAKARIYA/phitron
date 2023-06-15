#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    printf("1\n");
    for(int i=2;i<number;i++){
        if(number%i ==0){
            printf("%d\n",i);
        }
    }
    printf("%d",number);
    return 0;
}