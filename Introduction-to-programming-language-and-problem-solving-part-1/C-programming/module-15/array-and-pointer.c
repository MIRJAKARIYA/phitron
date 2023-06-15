#include<stdio.h>
int main(){
    int ar[5] = {10,20,30,40,50}; // ar hocche ar[0] er address ke nirdesh kore tai ar ekta pointer. int *ar = &ar[0]
    printf("0th index er add - %p\n",&ar[0]);
    printf("0th index er add - %p\n",ar);
    printf("0th index er value - %d\n",*ar);
    //porer index golo paoar formula
    // ar[1] = *(ar+1)
    //ar[2] = *a(r+2)
    //ar[3] = *(ar+3)
    // printf("1st index er value - %d\n",*(ar+1));
    // printf("2nd index er value - %d\n",*(ar+2));
    // printf("%d\n",*(ar+3));
    // printf("%d\n",*(ar+4));
    printf("%d\n",*(1+ar)); //*(ar+1) = *(1+ar)


   /*
   ar[1] -> *(ar+1)
    *(ar+1) -> ar[1]
    *(1+ar) -> ar[1] or 1[ar]

    ar[1] ==> behind the scene *(ar+1)
    so, 1[ar] ==> behind the scene *(1+ar)
   */ 
  printf("%d\n",*(1+ar));
  printf("%d\n",1[ar]);
   printf("%d\n",*(3+ar));
  printf("%d",3[ar]);


    // so, generalized formula
    // ar[x] ==> behind the scene *(ar+x)
    // x[ar] ==> behind the scene *(x+ar)

    return 0;
}