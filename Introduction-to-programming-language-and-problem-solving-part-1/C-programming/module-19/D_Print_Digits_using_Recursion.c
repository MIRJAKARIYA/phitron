#include <stdio.h>
void fun(int num)
{
    if (num == 0)
        return;
    int remainder = num % 10;
    
    fun(num / 10);
    printf("%d ", remainder);
}
int main()
{
    int testcases;
    scanf("%d", &testcases);
    for (int i = 0; i < testcases; i++)
    {
        int num;
         scanf("%d", &num);
        if(num ==0){
            printf("0");
            printf("\n");
            continue;
        }
       
        fun(num);
        printf("\n");
    }

    return 0;
}