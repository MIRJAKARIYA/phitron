#include<stdio.h>
int main(){
    int i=0;
    while(i<5){
        printf("%d\n",i);
        i++;
    }


    int j=5;
    do{
        printf("%d\n",j);
        j++;
    }
    while(j<5);


    return 0;
}