#include<stdio.h>
#include<limits.h>
int fun(int arr[],int size,int i){
    if(i==size){
        return INT_MIN;
    }
    int max = fun(arr,size,i+1);
    if(arr[i]>max){
        return arr[i];
    }
    else{
        return max;
    }

}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }


    int max = fun(arr,size,0);
    printf("%d",max);



    return 0;
}