#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    int maxIndex = 0;
    int min=arr[0];
    int minIndex = 0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
            maxIndex = i;
        }
        if(arr[i]<min){
            min = arr[i];
            minIndex = i;
        }
    }

    arr[maxIndex] = min;
    arr[minIndex] = max;
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}