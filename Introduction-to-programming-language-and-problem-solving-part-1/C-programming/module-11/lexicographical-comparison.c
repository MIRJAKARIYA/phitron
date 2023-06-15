#include<stdio.h>
#include<string.h>
int main(){
    //first omil paoa gele jeitar letter choto hobe onnotar tolonai sheita choto
    //kono ekta shesh hole kinto arekta shesh na hole jeita shesh hobe shita choto
    //doita ekshathe shesh hoiye gele doita shoman
    
    char a[100],b[100];
    scanf("%s %s",a,b);
    // for(int i=0;;i++){
    //     if(a[i]==b[i]){
    //         if(a[i] == '\0' && b[i] =='\0'){
    //             printf("%s and %s are equal",a,b);
    //             break;
    //         }
    //         continue;
    //     }
    //     else if(a[i] == '\0'){
    //         printf("%s is bigger",b);
    //         break;
    //     }
    //     else if(b[i] == '\0'){
    //         printf("%s is bigger",a);
    //         break;
    //     }
    //     else if(a[i]>b[i]){
    //         printf("%s is bigger",a);
    //         break;
    //     }
    //     else if(a[i]<b[i]){
    //         printf("%s is bigger",b);
    //         break;
    //     }
        
    // }


    /** 
      doing the same thing using built in function strcmp(a,b)
     * **/

    int v =strcmp(a,b); 
    //===> returns 1(not garuntied but the value will bi greater than 0) if the right side word is smaller
    //===> returns -1(not garantied but the value will be less than 0) if the left side word is smaller
    //===> returns 0(garantied) if both words are equal
    if(v > 0){
        printf("%s is smaller",b);
    }
    else if(v <0 ){
        printf("%s is smaller",a);
    }
    else{
        printf("Both are equal");
    }

    return 0;
}