#include <stdio.h>
void world()
{
    printf("World\n");
    printf("World End\n");
}
void hello()
{
    printf("Hello start\n");
    world();
    printf("Hello end\n");
}
int main()
{
    printf("Main Start\n");
    hello();
    printf("Main End\n");
    return 0;
}