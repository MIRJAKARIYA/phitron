#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    int arr2[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    int sum[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum[i][j] = arr[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }


    return 0;
}