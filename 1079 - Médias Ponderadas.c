#include <stdio.h>
int main(){
    int repetidor,i;
    float n1,n2,n3;
    scanf("%i", &repetidor);
    for(i = 0; i < repetidor; i++){
        scanf("%f", &n1);
        scanf("%f", &n2);
        scanf("%f", &n3);
        printf("%.1f\n", (n1 * 2 + n2 * 3 + n3 * 5) / 10);
    }
    return 0;
}