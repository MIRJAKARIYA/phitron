#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    long long int sumEven=0;
    long long int sumOdd=0;
    for(int i=0;i<size;i++){
        if(arr[i] %2==0){
            sumEven+=arr[i];
        }
        else{
            sumOdd+=arr[i];
        }
    }
    printf("%lld %lld", sumEven,sumOdd);
    
    return 0;
}