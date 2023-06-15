#include<stdio.h>
#include<string.h>
int main(){
    char a[21];
    char b[21];
    scanf("%s %s",a,b);
    int value= strcmp(a,b);
    if(value<0){
        printf("%s",a);
    }
    else if(value >0){
        printf("%s",b);
    }
    else{
        printf("%s",b);
    }
    return 0;
}