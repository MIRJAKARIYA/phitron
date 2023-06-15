#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    printf("The summation of the array is: %d",sum);
    return 0;
}