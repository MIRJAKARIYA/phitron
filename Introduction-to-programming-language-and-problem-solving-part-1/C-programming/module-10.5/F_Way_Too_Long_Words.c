#include<stdio.h>
#include<string.h>
int main()
{
    int testCase;
    scanf("%d",&testCase);
    for(int i=0;i<testCase;i++){
        char str[101];
        scanf("%s",str);
        if(strlen(str) > 10){
            printf("%c",str[0]);
            
                printf("%d",strlen(str)-2);
            printf("%c",str[strlen(str)-1]);
        }
        else{
            printf("%s",str);
        }
        printf("\n");
    }
    return 0;
}