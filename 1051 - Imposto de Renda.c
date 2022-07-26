#include <stdio.h>

int main(){

    double salario, imposto = 0;

    scanf("%lf", &salario);

    if(salario > 2000.00){
        salario = salario - 2000.00;
        if(0.00 < salario && salario <= 1000.00){
            imposto = salario * 0.08;
            salario = salario - 1000.00;
        }
        else if(salario > 1000.00){
            imposto = 1000 * 0.08;
            salario = salario - 1000.00;
        }
        if(0.00 < salario && salario <= 1500.00){
            imposto = (salario * 0.18) + imposto;
            salario = salario - 1500.00;
        }
        else if(salario > 1500.00){
            imposto = (1500 * 0.18) + imposto;
            salario = salario - 1500.00;
        }
        if(salario > 0.00){
            imposto = (salario * 0.28) + imposto;
        }
        printf("R$ %.2lf\n", imposto);

    }else{
        printf("Isento\n");
    }


    return 0;
}