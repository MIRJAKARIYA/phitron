#include<stdio.h>
#include<math.h>
int my_abs(int a) {
    int value = abs(a);
    return value;
}
int main(){
    int a;
    scanf("%d",&a);
    int value = my_abs(a);
    printf("%d",value);
    return 0;
}