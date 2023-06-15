#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int number;
    scanf("%d",&number);
    int exists = -1;
    for(int i=0;i<size;i++){
        if(arr[i] == number){
            exists = i;
            break;
        }
    }
    printf("%d",exists);

    return 0;
}