#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int marks[n];
    for(int i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }

    int biggest=0;

    for(int i=0;i<n;i++){
        if(marks[i] > biggest){
            biggest = marks[i];
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",biggest-marks[i]);
    }



    return 0;
}