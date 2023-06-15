#include<stdio.h>
long long int fun(int arr[],int size,int i){
    if(i==size-1){
        return arr[i];
    }
    long long int sum = arr[i] + fun(arr,size,i+1);
    return sum;
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    long long int sum = fun(arr,size,0);
    printf("%lld",sum);
    return 0;
}