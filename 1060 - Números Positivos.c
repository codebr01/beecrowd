#include <stdio.h>

int main(){
    int i,cont = 0;
    float numero;
    for(i= 1; i <= 6; i++){
        scanf("%f", &numero);
        if(numero > 0){
            cont++;
        }
    }
    printf("%i valores positivos\n", cont);

    return 0;
}