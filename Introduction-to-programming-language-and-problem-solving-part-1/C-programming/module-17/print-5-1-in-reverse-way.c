#include<stdio.h>
void printOneToFive(int i){
    if(i>5)return;
    printOneToFive(i+1);
    printf("%d\n",i);
}
int main(){
    printOneToFive(1);
    return 0;
}