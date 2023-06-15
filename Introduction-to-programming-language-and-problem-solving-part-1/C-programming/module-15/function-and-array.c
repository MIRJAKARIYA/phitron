#include<stdio.h>
//first way writing ar[]
// void fun(int ar[],int n){
//     // int sz = sizeof(ar)/sizeof(int); // ==> 1
//     // printf("%d",sz);
//     for(int i=0;i<n;i++){
//         printf("%d ",ar[i]);
//     }
// }

// second way *ar
void fun(int *ar,int n){
    // int sz = sizeof(ar)/sizeof(int); // ==> 1
    // printf("%d",sz);
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
}
int main(){
    int ar[5] = {10,20,30,40,50};
    // int sz = sizeof(ar)/sizeof(int);
    // printf("%d\n",sz); // ==> 5
    fun(ar,sizeof(ar)/sizeof(int));
    return 0;



}