#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=n-1;
    int k=1;
    for(int i=1;i<=n;i++){
        for(int l=1;l<=s;l++){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("%d",k);
        }
        s--;
        k++;
        printf("\n");

    }
    return 0;
}