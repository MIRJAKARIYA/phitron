#include<stdio.h>
#include<string.h>
int main(){
    int size;
    scanf("%d",&size);
    char arr[size+1];
    scanf("%s",arr);
    long long int sum =0;
    for(int i=0;i<strlen(arr);i++){
        sum+=arr[i]-'0';
    }
    printf("%lld",sum);
    
    return 0;
}