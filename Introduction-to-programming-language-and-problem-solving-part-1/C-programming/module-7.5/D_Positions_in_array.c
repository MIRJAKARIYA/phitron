#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int A[size];
    for(int i=0;i<size;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<size;i++){
        if(A[i]<=10){
            printf("A[%d] = %d\n",i,A[i]);
        }
    }
    
    return 0;
}