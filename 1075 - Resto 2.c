#include <stdio.h>
int main(){
    int divisor,i;
    scanf("%i", &divisor);
    if(divisor < 10000){
        for(i = 1; i <= 10000; i++){
            if(i % divisor == 2){
                printf("%i\n", i);
            }
        }
    }
    return 0;
}