#include <stdio.h>
int I,F,horas,resultado;
int calculo();
int main(){
    scanf("%i", &I);
    scanf("%i", &F);
    resultado = 0;
    if((I >= 0 && I <= 23) && (F >= 0 && F <= 23)){
        horas = calculo();
    }
    if(horas > 0){
        printf("O JOGO DUROU %i HORA(S)\n", horas);
    }
    return 0;
}
int calculo(){
    if((I >= 0) && (F >= 0)){
        if((I == F) && (F == I)){
            resultado = 24;
        }else{
            if(I != F){
                if(F == 0){
                    F = 24;
                }
                for(I; I != F; I++){
                    if(I == 24){
                        I = 0;
                    }
                    resultado++;
                }
            }
        }
        return resultado;
    }
}
