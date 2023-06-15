#include<stdio.h>
#include<string.h>
int main(){
    char a[11];
    char b[5];
    // char concated[9];
    scanf("%s %s",a,b);
    int lengthA = strlen(a);
    for(int i =0;i<=strlen(b);i++){
        // a[lengthA+i] = b[i];
        printf("%d %d\n",lengthA+i,i);
    }
    // for(int i=0;i<=strlen(a);i++){
    //     concated[i] = a[i];
    // }

    // printf("%s\n",concated);
    // for(int i=strlen(a);b[i-strlen(a)]!='\0';i++){
    //     concated[i] = b[i-strlen(a)];
    // }
    // concated[strlen(concated)] = '\0';
    // printf("%s",a);
    

    return 0;
}