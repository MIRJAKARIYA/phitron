#include<stdio.h>
void printArray(int ar[],int size,int i){
    if(i==size)return;
    printf("%d\n",ar[i]);
    printArray(ar,size,i+1);
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printArray(arr,size,0);
    return 0;
}