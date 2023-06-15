#include<stdio.h>
#include<string.h>

int main()
{
    char S[1000001];
    fgets(S,1000001,stdin);
    int i=0;
    while(S[i] != '\\'){
        printf("%c",S[i]);
        i++;
    }
    return 0;
}