#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int spaces = n - 1;
    int k=1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= spaces; j++)
        {
            printf(" ");
        }
        if(i%2==0){
            for(int z=1;z<=k;z++){
                printf("*");
        }
        }
        else{
            for(int z=1;z<=k;z++){
                printf("^");
        }
        }
        spaces--;
        k=k+2;
        printf("\n");
        
    }
    return 0;
}