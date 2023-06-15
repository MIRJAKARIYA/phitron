#include<stdio.h>
void printNumbers(int a){
    printf("%d",a);
    for(int i=1;i<=a;i++){
        if(i==a){
            printf("%d",i);
        }
        else{
            printf("%d ",i);
        }
    }
}
int main(){
    int a;
    scanf("%d",&a);
    printNumbers(a);
    return 0;
}