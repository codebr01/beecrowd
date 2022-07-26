#include <stdio.h>

int main(){
    double a,b,c,x,y,z;
    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);
    if(x > 0 && y > 0 && z > 0){
        if(x >= y && x >= z){
            a = x;
            b = y;
            c = z;
        }
        if(y >= x && y >= z){
            a = y;
            b = x;
            c = z;
        }
        if(z >= x && z >= y){
            a = z;
            b = x;
            c = y;
        }
    }
    if(a < b + c){
        if(a * a == b * b + c * c){
            printf("TRIANGULO RETANGULO\n");
        }else{
            if(a * a > b * b + c * c){
                printf("TRIANGULO OBTUSANGULO\n");
            }else{
                if(a * a < b * b + c * c){
                    printf("TRIANGULO ACUTANGULO\n");
                }
            }
        }
        if(a == b && c == b){
            printf("TRIANGULO EQUILATERO\n");
        }else{
            if(a == b || c == b){
                printf("TRIANGULO ISOSCELES\n");
            }
        }
    }else{
        printf("NAO FORMA TRIANGULO\n");
    }

    return 0;
}
