#include <stdio.h>
typedef struct{
    int hora_inicial;
    int minuto_inicial;
    int hora_final;
    int minuto_final;
}Tempo;
void relogio();
Tempo t;
int cont_minutos, cont_horas;
int main(){

    scanf("%i", &t.hora_inicial);
    scanf("%i", &t.minuto_inicial);
    scanf("%i", &t.hora_final);
    scanf("%i", &t.minuto_final);
    relogio();
    return 0;
}
void relogio(){
    cont_minutos = 0;
    cont_horas = 0;
    if(t.hora_inicial == 24){
        t.hora_inicial = 0;
    }
    if(t.minuto_inicial == 60){
        t.minuto_inicial = 0;
    }
    for(;;){
        t.minuto_inicial++;
        cont_minutos++;
        if(t.minuto_inicial == 60){
            t.minuto_inicial = 0;
            t.hora_inicial++;
        }
        if(t.hora_inicial == 24){
            t.hora_inicial = 0;
        }
        if(t.hora_inicial == t.hora_final && t.minuto_inicial == t.minuto_final){
            while(cont_minutos >= 60){
                cont_minutos -= 60;
                cont_horas++;
            }
            if(cont_horas <= 24 && cont_minutos >= 0){
                printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", cont_horas, cont_minutos);
                break;
            }
        }
    }
}
