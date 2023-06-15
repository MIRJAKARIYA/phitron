#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int even=0,odd=0,positive=0,negative=0;
    int temp;
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        if(temp%2==0){
            even++;
        }
        else{
            odd++;
        }
        if(temp>0){
            positive++;
        }
        else if(temp<0){
            negative++;
        }
    }
     printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,positive,negative);
    return 0;
}