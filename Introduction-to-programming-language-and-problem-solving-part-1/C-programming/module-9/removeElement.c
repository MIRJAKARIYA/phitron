#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pos;
    scanf("%d",&pos);

    for(int i=pos+1;i<n;i++){
        arr[i-1] = arr[i];
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}