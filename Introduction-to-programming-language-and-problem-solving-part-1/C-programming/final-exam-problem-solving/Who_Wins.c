#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int tigerScore=0;
    int pathanScore=0;

    for(int i=0;i<n;i++){
        int tiger,pathan;
        scanf("%d %d",&tiger,&pathan);
        if(tiger>pathan){
            tigerScore++;
        }
        else if(pathan>tiger){
            pathanScore++;
        }
        
    }

    if(tigerScore>pathanScore){
        printf("Tiger");
    }
    else if(pathanScore>tigerScore){
        printf("Pathan");
    }
    else{
        printf("Draw");
    }
    return 0;
}