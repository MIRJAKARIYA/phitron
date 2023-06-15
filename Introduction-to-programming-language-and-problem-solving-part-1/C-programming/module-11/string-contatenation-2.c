#include<stdio.h>
#include<string.h>
int main(){
    char str1[200];
    char str2[100];
    scanf("%s %s",str1,str2);
    int k = strlen(str1);
    for(int i=0;i<=strlen(str2);i++){
        
        str1[k] = str2[i];
        k++;
        
    }

    // strcat(str1,str2); //str1 er shathe str2 concat hoiye jabe.
        printf("%s",str1);
    return 0;
}