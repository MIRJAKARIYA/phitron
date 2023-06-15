#include<stdio.h>
#include<string.h>
int main(){
    
    char c;
    int charCount[26] = {0};
    while(scanf("%c",&c) !=EOF){
        charCount[c-97]++;
    }
    for(int i=0;i<26;i++){
       if(charCount[i]!=0){
         printf("%c : %d\n",i+97,charCount[i]);
       }
    }

    
    return 0;
}