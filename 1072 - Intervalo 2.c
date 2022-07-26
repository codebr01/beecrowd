#include <stdio.h>
int main(){
    int i,n,numero,in = 0,out = 0;
    scanf("%i", &n);
    if(n < 10000){
        for(i = 0; i < n; i++){
            scanf("%i", &numero);
            if(numero > -10000000 && numero < 10000000){
                if(numero >= 10 && numero <= 20){
                    in++;
                }else{
                    out++;
                }
            }else{
                i--;
            }
        }
    }
    printf("%i in\n", in);
    printf("%i out\n", out);
    return 0;
}