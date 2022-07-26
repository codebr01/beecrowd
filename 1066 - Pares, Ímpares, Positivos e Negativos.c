#include <stdio.h>
int main(){
    int i,num,pares = 0,impares = 0,positivo = 0,negativo = 0;
    for(i= 0; i < 5; i++){
        scanf("%i", &num);
        if(num % 2 == 0){
            pares++;
        }
        if(num % 2 != 0){
            impares++;
        }
        if(num > 0){
            positivo++;
        }
        if(num < 0){
            negativo++;
        }
    }
    printf("%i valor(es) par(es)\n", pares);
    printf("%i valor(es) impar(es)\n", impares);
    printf("%i valor(es) positivo(s)\n", positivo);
    printf("%i valor(es) negativo(s)\n", negativo);
    return 0;
}