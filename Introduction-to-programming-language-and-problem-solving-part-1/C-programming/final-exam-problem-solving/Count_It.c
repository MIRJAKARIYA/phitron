#include<stdio.h>
#include<string.h>
int main(){
    char str[1001];
    fgets(str,1001,stdin);
    int small=0;
    int capital=0;
    int spaces=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]>= 'a' && str[i]<='z'){
            small++;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            capital++;
        }
        else{
            spaces++;
        }
    }

    printf("Capital - %d\n",capital);
    printf("Small - %d\n",small);
    printf("Spaces - %d",spaces);

    return 0;
}