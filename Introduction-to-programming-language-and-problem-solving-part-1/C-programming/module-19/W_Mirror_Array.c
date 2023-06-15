#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int mirror[row][col];
    for(int i=0;i<row;i++){
        for(int j=col-1;j>=0;j--){
            mirror[i][col-(j+1)] = arr[i][j];
            // printf("%d ",col-(j+1));
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",mirror[i][j]);
        }
        printf("\n");
    }
    return 0;
}