#include<stdio.h>
int main()
{
    char a[6]; //one size extra for null character.windows automatically allocates memory so be carefull while taking input.
    scanf("%s",&a); //string input er jonno & na dileo chole
    printf("%s\n",a);
    return 0;
}