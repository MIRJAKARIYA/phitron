#include<stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int pDiagonal=0;
    int sDiagonal=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                pDiagonal+=arr[i][j];
 
            }
            else if(i+j == n-1){
                sDiagonal+=arr[i][j];

            }
        }
    }

    int sum = abs(pDiagonal-sDiagonal);

    printf("%d",sum);

    

    return 0;
}