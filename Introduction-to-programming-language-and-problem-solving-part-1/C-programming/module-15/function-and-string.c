#include<stdio.h>
#include<string.h>
void fun(char ar[]){
    // int sz = sizeof(ar)/sizeof(char); //doesn't work properly
    // printf("%d",sz);
    printf("%d",strlen(ar)); //works properly
}
// void fun(char *ar){
//     // int sz = sizeof(ar)/sizeof(char); //doesn't work properly
//     // printf("%d",sz);
//     printf("%d",strlen(ar)); //works properly
// }
int main(){
    char ar[20] = "Hello";
    // int sz = sizeof(ar)/sizeof(char);
    // printf("%d",sz);
    fun(ar);
    return 0;
}