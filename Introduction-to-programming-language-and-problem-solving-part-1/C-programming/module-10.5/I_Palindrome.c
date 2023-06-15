#include<stdio.h>
#include<string.h>
int main()
{
   char str[1001];
   char rev[1001];

   scanf("%s",str);
   for(int i=strlen(str)-1;i>=0;i--){
    rev[strlen(str)-1 - i] = str[i];

   }
    rev[strlen(str)] = '\0';
int isEqual = strcmp(str,rev);
if(isEqual ==0){
    printf("YES");
}
else{
    printf("NO");
}


   
   
    return 0;
}