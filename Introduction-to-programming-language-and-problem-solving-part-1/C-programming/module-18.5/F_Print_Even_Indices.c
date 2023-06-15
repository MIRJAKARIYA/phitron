#include<stdio.h>
void fun(int arr[],int i){
    if(i<0)return;
    if(i%2==0){
        printf("%d ",arr[i]);
    }
    fun(arr,i-1);
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    fun(arr,size-1);

    return 0;
}