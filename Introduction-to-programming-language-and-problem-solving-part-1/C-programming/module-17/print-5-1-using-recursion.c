#include<stdio.h>
void printHere(int i){
    if(i==1){
        printf("1");
        return;
    }
    printf("%d\n",i);
    printHere(i-1);
}
int main(){
    printHere(5);
    return 0;
}