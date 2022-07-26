#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    if((a < b) && (a < c)){
        printf("%i\n", a);
        if(b < c){
            printf("%i\n", b);
            printf("%i\n", c);
        }else{
            printf("%i\n", c);
            printf("%i\n", b);
        }
    }
    if((b < a) && (b < c)){
        printf("%i\n", b);
        if(a < c){
            printf("%i\n", a);
            printf("%i\n", c);
        }else{
            printf("%i\n", c);
            printf("%i\n", a);
        }
    }
    if((c < a) && (c < b)){
        printf("%i\n", c);
        if(a < b){
            printf("%i\n", a);
            printf("%i\n", b);
        }else{
            printf("%i\n", b);
            printf("%i\n", a);
        }
    }
    printf("\n");
    printf("%i\n", a);
    printf("%i\n", b);
    printf("%i\n", c);
    return 0;
}
