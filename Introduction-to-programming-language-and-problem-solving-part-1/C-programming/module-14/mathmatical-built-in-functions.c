//ceil()
//floor()
//round()
//sqrt()
//pow()
//abs()
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    // scanf("%lf %lf",&x,&y);
    // int ans = ceil(x);
    // int ans2 = floor(x);
    // int ro = round(x);
    // double res = sqrt(x);
    int ps = abs(x); //perfectly kaj kore int er khetre.long long int er khetre jhamela korte pare tokhon if else dia solve kora jete pare.

    printf("%d\n",ps);
    
    int res1 = pow(x*1.0,y*1.0);
    printf("%d",res1);
    return 0;
}