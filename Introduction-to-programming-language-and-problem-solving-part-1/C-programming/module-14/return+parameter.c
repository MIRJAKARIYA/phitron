#include<stdio.h>
int sum(int x,int y){

    int sum =x+y;
    return sum;
    
}

int main(){
    int res = sum(1000,2000);
    printf("%d\n",sum(200,300));
    printf("%d",res);
    return 0;
}