#include <stdio.h>
int main(){
    int i,cont = 0;
    float num,soma = 0;
    for(i = 0; i < 6; i++){
        scanf("%f", &num);
        if(num > 0){
            cont++;
            soma = soma + num;
        }
    }
    printf("%i valores positivos\n", cont);
    printf("%.1f\n", soma/cont);
    return 0;
}