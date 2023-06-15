#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        int count[100001] = {0};
    for(int i=0;i<n;i++){
        if(arr[i] <=m && arr[i]>=1){
            count[arr[i]]++;
        }
    }
    for(int i=1;i<=m;i++){
        if(count[i] !=0){
            printf("%d\n",count[i]);
        }
    }
    
    

    return 0;
}