#include<stdio.h>
void printMaxAndMin(int a[],int size){
    int max = a[0];
    int min = a[0];
    for(int i=0;i<size;i++){
        if(a[i]>max){
            max = a[i];
        }
        else if(a[i]<min){
            min = a[i];
        }
    }
    printf("%d %d",min,max);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printMaxAndMin(arr,n);

    return 0;
}