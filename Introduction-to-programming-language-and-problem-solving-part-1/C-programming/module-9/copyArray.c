#include<stdio.h>
int main()
{
    int s1,s2;
    scanf("%d %d",&s1,&s2);
    int arr1[s1],arr2[s2],copied[s1+s2];
    for(int i=0;i<s1;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<s2;i++){
        scanf("%d",&arr2[i]);
    }

    for(int i=0;i<s1+s2;i++){
        if(i<s1){
            copied[i] = arr1[i];
        }
        else{
            copied[i] = arr2[i-s1];
        }
    }
    for(int i=0;i<s1+s2;i++){
        printf("%d ",copied[i]);
    }


    return 0;
}