#include <stdio.h>
int main(){
    int i,n,p;
    p = 0;
    for(i = 1; i <= 5; i++){
        scanf("%i",&n);
        if(n % 2 == 0){
            p++;
        }
    }
    printf("%i valores pares\n", p);
    return 0;
}