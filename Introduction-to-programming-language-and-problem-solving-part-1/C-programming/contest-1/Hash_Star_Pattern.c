#include<stdio.h>
#include<math.h>
int main(){
    int number;
    scanf("%d",&number);
    int middle=(number/2) +1;

    if(number==1){
        printf("#");
        return 0;
    }
    for(int i=1;i<=number;i++){
        for(int j=1;j<=number;j++){
            if(i==middle || j==middle){
                printf("#");
            }
            else{
                printf("*");
            }
            
        }
        printf("\n");
    }
    return 0;
}