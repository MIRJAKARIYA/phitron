#include<stdio.h>
int main()
{
    int pass;
    // while(1){
    //     scanf("%d\n",&pass);
    //     if(pass != 1999){
    //         printf("Wrong\n");
    //     }
    //     else{
    //         printf("Correct");
    //         break;
    //     }

    // }
    while(scanf("%d",&pass) != EOF){
        if(pass == 1999){
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
    return 0;
}