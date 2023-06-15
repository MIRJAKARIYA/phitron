#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int count = 0;
    int i=0;
    // for(int i=0;a[i] != '\0';i++){
    //     count++;
    // }

    // while(a[i]!='\0'){
    //     count++;
    //     i++;
    // }
    // printf("%d",count);
    const stringLength = strlen(a);
    printf("%d",stringLength);
    return 0;
}