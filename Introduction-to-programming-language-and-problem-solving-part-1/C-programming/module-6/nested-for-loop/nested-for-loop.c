#include<stdio.h>
int main()
{
    int how;
    scanf("%d",&how);
    for(int i=1;i<=how;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}