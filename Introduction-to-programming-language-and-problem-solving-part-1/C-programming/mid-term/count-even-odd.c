#include<stdio.h>
#include<string.h>
int main(){
   char str[1001];
   scanf("%s",str);
   int charCount[26] = {0};
   for(int i=0;i<strlen(str);i++){
    charCount[str[i]-97]++;
   }
   for(int i=0;i<26;i++){
    printf("%c - %d\n",i+97,charCount[i]);
   }
    return 0;
}