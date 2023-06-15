#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int A[size];
    for(int i=0;i<size;i++){
        scanf("%d",&A[i]);
    }
    int lowestNumber = A[0];
    int lowestNumberPosition = 1;
    for(int i=0;i<size;i++){
        if(A[i]<lowestNumber){
            lowestNumber = A[i];
            lowestNumberPosition = i+1;
        }
    }
    printf("%d %d",lowestNumber,lowestNumberPosition);
    return 0;
}