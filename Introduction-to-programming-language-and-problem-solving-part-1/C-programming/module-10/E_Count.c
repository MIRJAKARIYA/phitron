#include<stdio.h>
int main()
{
    char S[1000001];
    scanf("%s",S);
    int i=0;
    int sum = 0;
    while (S[i]!='\0')
    {
        // printf("%c",S[i]);
        int num = S[i] - '0';
        sum+=num;
        i++;
    }
    printf("%d",sum);
    
    return 0;
}