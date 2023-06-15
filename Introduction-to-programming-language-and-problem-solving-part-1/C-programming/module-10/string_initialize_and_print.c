#include<stdio.h>
int main()
{
    // char a[6] = {'R','a','h','a','t'}; no garanty for automatically taking null.
    // char a[6] = {'R','a','h','a','t','\0'}; 

    char a[6] = "Rahat\0"; 
    // here size = 7 ,1 manual null and another automatiacally null

    // char b[6] = "Rahat"; //char b[] = "Rahat" //garantied null
    // printf("%s",b);
    // here size = 6 ,1 automatiacally null

    //"" diye array initialize korle automatically null boshiye dei.

    // \0 ==> null character
    // for(int i=0;i<5;i++){
    //     printf("%c\n",a[i]);
    // }
    printf("%s",a);
    return 0;
}