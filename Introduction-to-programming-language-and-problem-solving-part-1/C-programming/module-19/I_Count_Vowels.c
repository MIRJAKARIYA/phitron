#include<stdio.h>
#include<string.h>
int fun(char str[],int i){
    // base case
    if(str[i]=='\0'){
        return 0;
    }
    int ans = fun(str,i+1);
    if(str[i]>='A' && str[i]<='Z'){
        str[i]=str[i]+32;

    }
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
        return ans+1;
    }
    else{
        return ans;
    }

}
int main(){
    char str[201];
    fgets(str,205,stdin);
    int countVowel=fun(str,0);
    printf("%d",countVowel);
    return 0;
}