#include<stdio.h>
void fun(int n,int i){
    if(i<1)return;
    if(i==1){
         printf("%d",i);
    }
    else{
         printf("%d ",i);
    }
    fun(n,i-1);
}
int main(){
    int n;
    scanf("%d",&n);
    fun(n,n);
    return 0;
}