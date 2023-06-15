#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    int number;
    scanf("%d",&n);
    int max=INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        scanf("%d",&number);
        if(number>max){
            max =number;
        }
        if(number<min){
            min = number;
        }
    }
    printf("%d %d",max,min);
    return 0;
}