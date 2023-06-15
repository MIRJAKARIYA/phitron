#include<stdio.h>
#include<string.h>
int main(){
    char alphabet[100];
    scanf("%s",alphabet);
    int alCount[26] = {0};
    for(int i=0;alphabet[i]!='\0';i++){
        alCount[alphabet[i]-97]++;
    }
    // for(int i=0;i<26;i++){
    //     if(alCount[i] != 0){
    //         printf("%c - %d\n",i+97,alCount[i]);
    //     }
        
    // }
    for(int i=0;i<strlen(alphabet);i++){
        
        if(alCount[alphabet[i]-97] !=0){
            printf("%c - %d\n",alphabet[i],alCount[alphabet[i]-97]);
            alCount[alphabet[i]-97] = 0;
        }
        
    }

    return 0;
}