#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // int swapCount = n/2;
    // for(int i=0;i<swapCount;i++){
    //     int temp = arr[i];
    //     arr[i] = arr[n-1-i];
    //     arr[n-1-i] = temp;
    // }
    int i=0,j=n-1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    
    return 0;
}

// Two pointers technique