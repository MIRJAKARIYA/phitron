#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {

        int size, search;
        scanf("%d", &size);
        int numbers[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &numbers[i]);
        }
        scanf("%d", &search);
        int found=0;
        for(int j=0;j<size;j++){
            if(numbers[j] == search){
                found=1;
                printf("Case %d: %d",i+1,j+1);
                break;
            }
        }
        if(found == 0){
            printf("Case %d: Not Found",i+1);
        }
        printf("\n");

    }

    return 0;
}