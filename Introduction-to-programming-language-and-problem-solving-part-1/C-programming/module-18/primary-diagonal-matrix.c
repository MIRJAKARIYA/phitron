#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int flag=1;
    if(row !=col){
        flag =0;
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(a[i][j] !=0 && i!=j){
                flag=0;
            }
        }
    }

    if(flag==1){
        printf("Primary Diagonal");
    }
    else{
        printf("Not diagonal");
    }



    return 0;
}